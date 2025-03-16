const { MongoClient } = require('mongodb');

async function run() {
    const client = new MongoClient('mongodb://localhost:32212');
    
    try {
        await client.connect();
        const database = client.db('mydatabase');
        const collection = database.collection('mycollection');

        const doc = { name: "Alice", age: 30 };  // 添加字段 name 和 age

        // 插入文档
        const result = await collection.insertOne(doc);
        console.log(`A document was inserted with the id: ${result.insertedId}`);
    } catch (error) {
        console.error("Insert failed:", error);
    } finally {
        await client.close();
    }
}

run().catch(console.dir);
