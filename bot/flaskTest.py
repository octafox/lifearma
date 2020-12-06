import flask
from flask import request, jsonify
import dbLifeFnc as life

app = flask.Flask(__name__)
app.config["DEBUG"] = True

# Create some test data for our catalog in the form of a list of dictionaries.
@app.route('/api/player', methods=['GET'])
def api_sid():
    # Check if an ID was provided as part of the URL.
    # If ID is provided, assign it to a variable.
    # If no ID is provided, display an error in the browser.
    if 'sid' in request.args:
        sid = (request.args['sid'])

    else:
        return "Error: No id field provided. Please specify an id."

    

    return jsonify(life.apiGetPlayerBySID(sid))

@app.route('/api/allPlayers', methods=['GET'])
def api_all():
    return jsonify(life.apiGetAllPlayers())

app.run()