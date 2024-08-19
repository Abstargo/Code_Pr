from flask import Flask, request, jsonify
from flask_cors import CORS
from config import DevelopmentConfig
from models import db
from routes import auth_bp
from flask_jwt_extended import JWTManager

app = Flask(__name__)
CORS(app)
app.config.from_object(DevelopmentConfig)

db.init_app(app)
jwt = JWTManager(app)

app.register_blueprint(auth_bp)

if __name__ == '__main__':
    with app.app_context():
        db.create_all() #Create the database tables
    app.run(debug=True)
