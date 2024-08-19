import os

class Config:
    SECRET_KEY = os.getenv('SECRET_KEY', 'your_default_secret_key')
    SQLALCHEMY_TRACK_MODIFICATIONS = False
    SQLALCHEMY_DATABASE_URI = os.getenv('DATABASE_URL', 'sqlite:///users.db')
    JWT_SECRET_KEY = os.getenv('JWT_SECRET_KEY', 'your_default_jwt_secret_key')

class DevelopmentConfig(Config):
    DEBUG = True
    SQLALCHEMY_ECHO = True  # Optional: logs SQL queries for debugging purposes

class ProductionConfig(Config):
    DEBUG = False
    # Optional: add additional production-specific settings here

class TestingConfig(Config):
    TESTING = True
    SQLALCHEMY_DATABASE_URI = 'sqlite:///:memory:'  # In-memory database for testing
    DEBUG = True

