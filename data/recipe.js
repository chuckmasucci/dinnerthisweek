db = db.getSiblingDB("dinnerthisweek");
db.recipes.drop();
db.recipes.insertMany([
  {
    "title": "Test Recipe One",
    "url": "https://example.com/one",
    "image": "test.jpg"
  },
  {
    "title": "Test Recipe One",
    "url": "https://example.com/two",
    "image": "test.jpg"
  }
])
