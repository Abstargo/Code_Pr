from flask import Flask
from flask_sqlalchemy import SQLAlchemy
from flask_bcrypt import Bcrypt

db = SQLAlchemy()
bcrypt = Bcrypt()

def create_app():
    app = Flask(__name__)
    app.config['SQLALCHEMY_DATABASE_URI'] = 'mysql+mysqlconnector://Yassir:Abstar_8-8@localhost/my_project_db'
    db.init_app(app)

    from flask_cors import CORS
    CORS(app, resources={r"/*": {"origins": "http://localhost:3000"}})

    from .routes import auth_bp
    app.register_blueprint(auth_bp)


    return app
