# UE5 Plugin-MySQL
| return | Function Name        | In                                        |
| ------ | -------------------- | ----------------------------------------- |
| bool   | Initialize           | FString, int32, FString, FString, FString |
| bool   | Query                | FString                                   |
| bool   | QueryFormRowValueHas | FString, FString, FString                 |
| \      | Close                | \                                         |

```Blueprint
		Initialize
(host)					(bool)
(port)
(username)
(password)
(db)
```

```Blueprint
		Query
(query)			(bool)
```

```Blueprint
		QueryFormRowValueHas
(formname)						(bool)
(rowname)
(value)
```

