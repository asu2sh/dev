def list_converter(list):
    id_to_person = {}
    result_list = []

    for person in list:
        person_id = person["id"]
        person["children"] = []
        id_to_person[person_id] = person
        
    for person in list:
        parent_id = person["parent_id"]
        if parent_id is None:
            result_list.append(person)
        else:
            parent = id_to_person[parent_id]
            parent["children"].append(person)

    return result_list


list_format = [
    {"id": "101", "person": "Alex", "parent_id": None},
    {"id": "201", "person": "Adam", "parent_id": "101"},
    {"id": "301", "person": "Alice", "parent_id": "201"},
    {"id": "456", "person": "Sami", "parent_id": None},
    {"id": "789", "person": "Monica", "parent_id": None},
]

converted_list_format = list_converter(list_format)
print(converted_list_format)
