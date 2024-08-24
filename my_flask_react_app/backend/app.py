from flask import Flask
from flask_sqlalchemy import SQLAlchemy
from flask_bcrypt import Bcrypt
from flask_jwt_extended import JWTManager
from flask_cors import CORS

app = Flask(__name__)
app.config['SQLAlCHEMY_DATABASE_URI'] = 'mysql+pymysql://user:password@localchost/db_name'
app.config['JWT_SECRET_KEY'] = 'your_jwt_secret_key'
app.config['CORS_HEADERS'] = 'Content-Type'

db = SQLAlchemy(app)
bcrypt = Bcrypt(app)
jwt = JWTManager(app)
CORS(app)

from routes import auth_bp
app.register_blueprint(auth_bp)

if __name__ == '__main__':
    app.run(debug=True)