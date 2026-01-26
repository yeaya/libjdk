#include <java/sql/Connection.h>

#include <java/sql/Array.h>
#include <java/sql/Blob.h>
#include <java/sql/CallableStatement.h>
#include <java/sql/Clob.h>
#include <java/sql/DatabaseMetaData.h>
#include <java/sql/NClob.h>
#include <java/sql/PreparedStatement.h>
#include <java/sql/SQLFeatureNotSupportedException.h>
#include <java/sql/SQLWarning.h>
#include <java/sql/SQLXML.h>
#include <java/sql/Savepoint.h>
#include <java/sql/ShardingKey.h>
#include <java/sql/Statement.h>
#include <java/sql/Struct.h>
#include <java/sql/Wrapper.h>
#include <java/util/Map.h>
#include <java/util/Properties.h>
#include <java/util/concurrent/Executor.h>
#include <jcpp.h>

#undef TRANSACTION_NONE
#undef TRANSACTION_READ_COMMITTED
#undef TRANSACTION_READ_UNCOMMITTED
#undef TRANSACTION_REPEATABLE_READ
#undef TRANSACTION_SERIALIZABLE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::sql::Array;
using $Blob = ::java::sql::Blob;
using $CallableStatement = ::java::sql::CallableStatement;
using $Clob = ::java::sql::Clob;
using $DatabaseMetaData = ::java::sql::DatabaseMetaData;
using $NClob = ::java::sql::NClob;
using $PreparedStatement = ::java::sql::PreparedStatement;
using $SQLFeatureNotSupportedException = ::java::sql::SQLFeatureNotSupportedException;
using $SQLWarning = ::java::sql::SQLWarning;
using $SQLXML = ::java::sql::SQLXML;
using $Savepoint = ::java::sql::Savepoint;
using $ShardingKey = ::java::sql::ShardingKey;
using $Statement = ::java::sql::Statement;
using $Struct = ::java::sql::Struct;
using $Wrapper = ::java::sql::Wrapper;
using $Map = ::java::util::Map;
using $Properties = ::java::util::Properties;
using $Executor = ::java::util::concurrent::Executor;

namespace java {
	namespace sql {

$FieldInfo _Connection_FieldInfo_[] = {
	{"TRANSACTION_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Connection, TRANSACTION_NONE)},
	{"TRANSACTION_READ_UNCOMMITTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Connection, TRANSACTION_READ_UNCOMMITTED)},
	{"TRANSACTION_READ_COMMITTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Connection, TRANSACTION_READ_COMMITTED)},
	{"TRANSACTION_REPEATABLE_READ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Connection, TRANSACTION_REPEATABLE_READ)},
	{"TRANSACTION_SERIALIZABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Connection, TRANSACTION_SERIALIZABLE)},
	{}
};

$MethodInfo _Connection_MethodInfo_[] = {
	{"abort", "(Ljava/util/concurrent/Executor;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, abort, void, $Executor*), "java.sql.SQLException"},
	{"beginRequest", "()V", nullptr, $PUBLIC, $virtualMethod(Connection, beginRequest, void), "java.sql.SQLException"},
	{"clearWarnings", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, clearWarnings, void), "java.sql.SQLException"},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"commit", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, commit, void), "java.sql.SQLException"},
	{"createArrayOf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/sql/Array;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, createArrayOf, $1Array*, $String*, $ObjectArray*), "java.sql.SQLException"},
	{"createBlob", "()Ljava/sql/Blob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, createBlob, $Blob*), "java.sql.SQLException"},
	{"createClob", "()Ljava/sql/Clob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, createClob, $Clob*), "java.sql.SQLException"},
	{"createNClob", "()Ljava/sql/NClob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, createNClob, $NClob*), "java.sql.SQLException"},
	{"createSQLXML", "()Ljava/sql/SQLXML;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, createSQLXML, $SQLXML*), "java.sql.SQLException"},
	{"createStatement", "()Ljava/sql/Statement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, createStatement, $Statement*), "java.sql.SQLException"},
	{"createStatement", "(II)Ljava/sql/Statement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, createStatement, $Statement*, int32_t, int32_t), "java.sql.SQLException"},
	{"createStatement", "(III)Ljava/sql/Statement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, createStatement, $Statement*, int32_t, int32_t, int32_t), "java.sql.SQLException"},
	{"createStruct", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/sql/Struct;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, createStruct, $Struct*, $String*, $ObjectArray*), "java.sql.SQLException"},
	{"endRequest", "()V", nullptr, $PUBLIC, $virtualMethod(Connection, endRequest, void), "java.sql.SQLException"},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getAutoCommit", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, getAutoCommit, bool), "java.sql.SQLException"},
	{"getCatalog", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, getCatalog, $String*), "java.sql.SQLException"},
	{"getClientInfo", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, getClientInfo, $String*, $String*), "java.sql.SQLException"},
	{"getClientInfo", "()Ljava/util/Properties;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, getClientInfo, $Properties*), "java.sql.SQLException"},
	{"getHoldability", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, getHoldability, int32_t), "java.sql.SQLException"},
	{"getMetaData", "()Ljava/sql/DatabaseMetaData;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, getMetaData, $DatabaseMetaData*), "java.sql.SQLException"},
	{"getNetworkTimeout", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, getNetworkTimeout, int32_t), "java.sql.SQLException"},
	{"getSchema", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, getSchema, $String*), "java.sql.SQLException"},
	{"getTransactionIsolation", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, getTransactionIsolation, int32_t), "java.sql.SQLException"},
	{"getTypeMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Connection, getTypeMap, $Map*), "java.sql.SQLException"},
	{"getWarnings", "()Ljava/sql/SQLWarning;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, getWarnings, $SQLWarning*), "java.sql.SQLException"},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"isClosed", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, isClosed, bool), "java.sql.SQLException"},
	{"isReadOnly", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, isReadOnly, bool), "java.sql.SQLException"},
	{"isValid", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, isValid, bool, int32_t), "java.sql.SQLException"},
	{"nativeSQL", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, nativeSQL, $String*, $String*), "java.sql.SQLException"},
	{"prepareCall", "(Ljava/lang/String;)Ljava/sql/CallableStatement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, prepareCall, $CallableStatement*, $String*), "java.sql.SQLException"},
	{"prepareCall", "(Ljava/lang/String;II)Ljava/sql/CallableStatement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, prepareCall, $CallableStatement*, $String*, int32_t, int32_t), "java.sql.SQLException"},
	{"prepareCall", "(Ljava/lang/String;III)Ljava/sql/CallableStatement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, prepareCall, $CallableStatement*, $String*, int32_t, int32_t, int32_t), "java.sql.SQLException"},
	{"prepareStatement", "(Ljava/lang/String;)Ljava/sql/PreparedStatement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, prepareStatement, $PreparedStatement*, $String*), "java.sql.SQLException"},
	{"prepareStatement", "(Ljava/lang/String;II)Ljava/sql/PreparedStatement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, prepareStatement, $PreparedStatement*, $String*, int32_t, int32_t), "java.sql.SQLException"},
	{"prepareStatement", "(Ljava/lang/String;III)Ljava/sql/PreparedStatement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, prepareStatement, $PreparedStatement*, $String*, int32_t, int32_t, int32_t), "java.sql.SQLException"},
	{"prepareStatement", "(Ljava/lang/String;I)Ljava/sql/PreparedStatement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, prepareStatement, $PreparedStatement*, $String*, int32_t), "java.sql.SQLException"},
	{"prepareStatement", "(Ljava/lang/String;[I)Ljava/sql/PreparedStatement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, prepareStatement, $PreparedStatement*, $String*, $ints*), "java.sql.SQLException"},
	{"prepareStatement", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/sql/PreparedStatement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, prepareStatement, $PreparedStatement*, $String*, $StringArray*), "java.sql.SQLException"},
	{"releaseSavepoint", "(Ljava/sql/Savepoint;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, releaseSavepoint, void, $Savepoint*), "java.sql.SQLException"},
	{"rollback", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, rollback, void), "java.sql.SQLException"},
	{"rollback", "(Ljava/sql/Savepoint;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, rollback, void, $Savepoint*), "java.sql.SQLException"},
	{"setAutoCommit", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, setAutoCommit, void, bool), "java.sql.SQLException"},
	{"setCatalog", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, setCatalog, void, $String*), "java.sql.SQLException"},
	{"setClientInfo", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, setClientInfo, void, $String*, $String*), "java.sql.SQLClientInfoException"},
	{"setClientInfo", "(Ljava/util/Properties;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, setClientInfo, void, $Properties*), "java.sql.SQLClientInfoException"},
	{"setHoldability", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, setHoldability, void, int32_t), "java.sql.SQLException"},
	{"setNetworkTimeout", "(Ljava/util/concurrent/Executor;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, setNetworkTimeout, void, $Executor*, int32_t), "java.sql.SQLException"},
	{"setReadOnly", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, setReadOnly, void, bool), "java.sql.SQLException"},
	{"setSavepoint", "()Ljava/sql/Savepoint;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, setSavepoint, $Savepoint*), "java.sql.SQLException"},
	{"setSavepoint", "(Ljava/lang/String;)Ljava/sql/Savepoint;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, setSavepoint, $Savepoint*, $String*), "java.sql.SQLException"},
	{"setSchema", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, setSchema, void, $String*), "java.sql.SQLException"},
	{"setShardingKey", "(Ljava/sql/ShardingKey;Ljava/sql/ShardingKey;)V", nullptr, $PUBLIC, $virtualMethod(Connection, setShardingKey, void, $ShardingKey*, $ShardingKey*), "java.sql.SQLException"},
	{"setShardingKey", "(Ljava/sql/ShardingKey;)V", nullptr, $PUBLIC, $virtualMethod(Connection, setShardingKey, void, $ShardingKey*), "java.sql.SQLException"},
	{"setShardingKeyIfValid", "(Ljava/sql/ShardingKey;Ljava/sql/ShardingKey;I)Z", nullptr, $PUBLIC, $virtualMethod(Connection, setShardingKeyIfValid, bool, $ShardingKey*, $ShardingKey*, int32_t), "java.sql.SQLException"},
	{"setShardingKeyIfValid", "(Ljava/sql/ShardingKey;I)Z", nullptr, $PUBLIC, $virtualMethod(Connection, setShardingKeyIfValid, bool, $ShardingKey*, int32_t), "java.sql.SQLException"},
	{"setTransactionIsolation", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, setTransactionIsolation, void, int32_t), "java.sql.SQLException"},
	{"setTypeMap", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(Connection, setTypeMap, void, $Map*), "java.sql.SQLException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Connection_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.Connection",
	nullptr,
	"java.sql.Wrapper,java.lang.AutoCloseable",
	_Connection_FieldInfo_,
	_Connection_MethodInfo_
};

$Object* allocate$Connection($Class* clazz) {
	return $of($alloc(Connection));
}

int32_t Connection::hashCode() {
	 return this->$Wrapper::hashCode();
}

bool Connection::equals(Object$* arg0) {
	 return this->$Wrapper::equals(arg0);
}

$Object* Connection::clone() {
	 return this->$Wrapper::clone();
}

$String* Connection::toString() {
	 return this->$Wrapper::toString();
}

void Connection::finalize() {
	this->$Wrapper::finalize();
}

void Connection::beginRequest() {
}

void Connection::endRequest() {
}

bool Connection::setShardingKeyIfValid($ShardingKey* shardingKey, $ShardingKey* superShardingKey, int32_t timeout) {
	$throwNew($SQLFeatureNotSupportedException, "setShardingKeyIfValid not implemented"_s);
	$shouldNotReachHere();
}

bool Connection::setShardingKeyIfValid($ShardingKey* shardingKey, int32_t timeout) {
	$throwNew($SQLFeatureNotSupportedException, "setShardingKeyIfValid not implemented"_s);
	$shouldNotReachHere();
}

void Connection::setShardingKey($ShardingKey* shardingKey, $ShardingKey* superShardingKey) {
	$throwNew($SQLFeatureNotSupportedException, "setShardingKey not implemented"_s);
}

void Connection::setShardingKey($ShardingKey* shardingKey) {
	$throwNew($SQLFeatureNotSupportedException, "setShardingKey not implemented"_s);
}

$Class* Connection::load$($String* name, bool initialize) {
	$loadClass(Connection, name, initialize, &_Connection_ClassInfo_, allocate$Connection);
	return class$;
}

$Class* Connection::class$ = nullptr;

	} // sql
} // java