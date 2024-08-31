from flask import Flask
from flask_sqlalchemy import SQLAlchemy
from flask_bcrypt import Bcrypt
from flask_cors import CORS

db = SQLAlchemy()
bcrypt = Bcrypt()

def create_app():
    app = Flask(__name__)
    
    # Configure the application
    app.config['SQLALCHEMY_DATABASE_URI'] = 'mysql+mysqlconnector://Yassir:Abstar_8-8@localhost:3306/new_database'
    app.config['SQLALCHEMY_TRACK_MODIFICATIONS'] = False  # Optional, to disable SQLAlchemy track modifications warning

    # Initialize extensions
    db.init_app(app)
    bcrypt.init_app(app)
    CORS(app, resources={r"/*": {"origins": "*"}})


    # Register blueprints
    from .routes import auth_bp
    app.register_blueprint(auth_bp, url_prefix='/auth')

    # Initialize the database
    # with app.app_context():
    #    db.create_all()


    return app

