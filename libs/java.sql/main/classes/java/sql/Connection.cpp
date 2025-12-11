#include <java/sql/Connection.h>

#include <java/sql/Array.h>
#include <java/sql/Blob.h>
#include <java/sql/CallableStatement.h>
#include <java/sql/DatabaseMetaData.h>
#include <java/sql/NClob.h>
#include <java/sql/SQLFeatureNotSupportedException.h>
#include <java/sql/SQLWarning.h>
#include <java/sql/SQLXML.h>
#include <java/sql/Savepoint.h>
#include <java/sql/ShardingKey.h>
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
using $SQLFeatureNotSupportedException = ::java::sql::SQLFeatureNotSupportedException;
using $ShardingKey = ::java::sql::ShardingKey;
using $Wrapper = ::java::sql::Wrapper;

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
	{"abort", "(Ljava/util/concurrent/Executor;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"beginRequest", "()V", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"clearWarnings", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"commit", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"createArrayOf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/sql/Array;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"createBlob", "()Ljava/sql/Blob;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"createClob", "()Ljava/sql/Clob;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"createNClob", "()Ljava/sql/NClob;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"createSQLXML", "()Ljava/sql/SQLXML;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"createStatement", "()Ljava/sql/Statement;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"createStatement", "(II)Ljava/sql/Statement;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"createStatement", "(III)Ljava/sql/Statement;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"createStruct", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/sql/Struct;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"endRequest", "()V", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getAutoCommit", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getCatalog", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getClientInfo", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getClientInfo", "()Ljava/util/Properties;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getHoldability", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getMetaData", "()Ljava/sql/DatabaseMetaData;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getNetworkTimeout", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getSchema", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getTransactionIsolation", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getTypeMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;", $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getWarnings", "()Ljava/sql/SQLWarning;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"isClosed", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"isReadOnly", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"isValid", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"nativeSQL", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"prepareCall", "(Ljava/lang/String;)Ljava/sql/CallableStatement;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"prepareCall", "(Ljava/lang/String;II)Ljava/sql/CallableStatement;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"prepareCall", "(Ljava/lang/String;III)Ljava/sql/CallableStatement;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"prepareStatement", "(Ljava/lang/String;)Ljava/sql/PreparedStatement;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"prepareStatement", "(Ljava/lang/String;II)Ljava/sql/PreparedStatement;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"prepareStatement", "(Ljava/lang/String;III)Ljava/sql/PreparedStatement;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"prepareStatement", "(Ljava/lang/String;I)Ljava/sql/PreparedStatement;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"prepareStatement", "(Ljava/lang/String;[I)Ljava/sql/PreparedStatement;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"prepareStatement", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/sql/PreparedStatement;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"releaseSavepoint", "(Ljava/sql/Savepoint;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"rollback", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"rollback", "(Ljava/sql/Savepoint;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setAutoCommit", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setCatalog", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setClientInfo", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLClientInfoException"},
	{"setClientInfo", "(Ljava/util/Properties;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLClientInfoException"},
	{"setHoldability", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNetworkTimeout", "(Ljava/util/concurrent/Executor;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setReadOnly", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setSavepoint", "()Ljava/sql/Savepoint;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setSavepoint", "(Ljava/lang/String;)Ljava/sql/Savepoint;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setSchema", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setShardingKey", "(Ljava/sql/ShardingKey;Ljava/sql/ShardingKey;)V", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"setShardingKey", "(Ljava/sql/ShardingKey;)V", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"setShardingKeyIfValid", "(Ljava/sql/ShardingKey;Ljava/sql/ShardingKey;I)Z", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"setShardingKeyIfValid", "(Ljava/sql/ShardingKey;I)Z", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"setTransactionIsolation", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setTypeMap", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)V", $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
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