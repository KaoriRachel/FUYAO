local counter = 1
local threads = {}
local interval = 60000

local fanout_num = 10

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
    local path = "http://192.168.1.129:8084/function/exp09StartFinra"
    local headers = {}
    headers["Content-Type"] = "Content-Type: application/json"
    local body =  "{\"req_id\": " .. req_id .. ", \"fanout_num\": "..fanout_num.."}"

    return wrk.format(method, path, headers, body)

end