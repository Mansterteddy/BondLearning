import json
import example

obj = example.Record()

obj.name = "test"
obj.items = [0.0, 1.0, 2.0]

data = example.Serialize(obj)
print(data)

dst_obj = example.Record()
example.Deserialize(data, dst_obj)
print(dst_obj.name)
print(len(dst_obj.items))
for item in dst_obj.items:
    print(item)
