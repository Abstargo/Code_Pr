from flask import Blueprint, request, jsonify
from flask_jwt_extended import create_access_token
from .models import User
from werkzeug.exceptions import BadRequest
from . import db

auth_bp = Blueprint('auth', __name__)


@auth_bp.route('/signup', methods=['OPTIONS' ,'POST'])
def signup():
    if request.method == 'OPTIONS':
        response = jsonify({"msg": "CORS preflight"})
        response.headers.add("Access-Control-Allow-Origin", "*")
        response.headers.add("Access-Control-Allow-Methods", "POST, OPTIONS")
        response.headers.add("Access-Control-Allow-Headers", "Content-Type")
        return response
    data = request.get_json()
    
    if not data or 'email' not in data or 'password' not in data or 'username' not in data:
        raise BadRequest('Missing required fields')
    
    if User.query.filter_by(email=data['email']).first():
        return jsonify({"msg": "Email already registered"}), 400

    new_user = User(
        username=data['username'],
        email=data['email']
    )

    new_user.set_password(data['password'])
    db.session.add(new_user)
    db.session.commit()

    return jsonify({"msg": "User created successfully"}), 201

@auth_bp.route('/signin', methods=['POST'])
def signin():
    data = request.get_json()

    if not data or 'email' not in data or 'password' not in data:
        raise BadRequest('Missing required fields')

    user = User.query.filter_by(email=data['email']).first()

    if not user or not user.check_password(data['password']):
        return jsonify({"msg": "Bad credentials"}), 401

    access_token = create_access_token(identity=user.id)
    return jsonify(access_token=access_token), 200
