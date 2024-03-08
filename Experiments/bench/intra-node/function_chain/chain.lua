local counter = 1
local threads = {}
local interval = 60000

-- local chain_len = 2
--local chain_len = 16
 local chain_len = 32
-- local chain_len = 64
-- local chain_len = 128

function setup(thread)
    thread:set("id", counter)
    table.insert(threads, thread)
    counter = counter + 1
end

function init(args)
    cnt = 1
    math.randomseed(id)
end

function request()

    local req_id = id * interval + cnt
    cnt = cnt + 1
    local method = "POST"
    local path = "http://192.168.1.129:8084/function/exp06Frontend"
    local headers = {}
    headers["Content-Type"] = "Content-Type: text"
    local body =  chain_len .. " 512B"

    return wrk.format(method, path, headers, body)

end