from flask import Flask, request, jsonify
from flask_sqlalchemy import SQLAlchemy
from flask_cors import CORS
from werkzeug.security import check_password_hash, generate_password_hash
from models import User, db
from flask_migrate import Migrate

app = Flask(__name__)
CORS(app)

app.config['SQLALCHEMY_DATABASE_URI'] = 'mysql+pymysql://Yassir:Abstar_8-8@127.0.0.1/my_project_db'
app.config['SQLALCHEMY_TRACK_MODIFICATIONS'] = False
db.init_app(app)
migrate = Migrate(app, db)

@app.route('/signup', methods=['POST'])
def signup():
    try:
        data = request.json

        if User.query.filter_by(username=data['username']).first():
            return jsonify({"message": "Username already exists"}), 409

        hashed_password = generate_password_hash(data["password"])

        new_user = User(username=data['username'], password=hashed_password)

        db.session.add(new_user)
        db.session.commit()

        return jsonify({"message": "User created seccessfully"}), 201
    
    except Exception as e:

        return jsonify({"message": "An error occurred", "error": str(e)}), 500

@app.route('/signin', methods=['POST'])
def signin():
    data = request.json
    user = User.query.filter_by(username=data['username']).first()
    if user and check_password_hash(user.password, data['password']):
        return jsonify({"message": "Sign in successful"}), 200
    else:
        return jsonify({'message': 'Invalid credentials'}), 401

@app.route('/users', methods=['GET'])
def get_users():
    users = User.query.all()
    return jsonify([{'id': user.id, 'username': user.username} for user in users])

if __name__ == '__main__':
    app.run(debug=True)

