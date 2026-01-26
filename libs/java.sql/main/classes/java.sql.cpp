#include <java.sql.h>

#include <java.base.h>
#include <java.logging.h>
#include <java.transaction.xa.h>
#include <java.xml.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>
#include <module-info>

#include <java/sql/Array.h>
#include <java/sql/BatchUpdateException.h>
#include <java/sql/Blob.h>
#include <java/sql/CallableStatement.h>
#include <java/sql/ClientInfoStatus.h>
#include <java/sql/Clob.h>
#include <java/sql/Connection.h>
#include <java/sql/ConnectionBuilder.h>
#include <java/sql/DataTruncation.h>
#include <java/sql/DatabaseMetaData.h>
#include <java/sql/Date.h>
#include <java/sql/Driver.h>
#include <java/sql/DriverAction.h>
#include <java/sql/DriverInfo.h>
#include <java/sql/DriverManager.h>
#include <java/sql/DriverManager$1.h>
#include <java/sql/DriverManager$2.h>
#include <java/sql/DriverPropertyInfo.h>
#include <java/sql/JDBCType.h>
#include <java/sql/NClob.h>
#include <java/sql/ParameterMetaData.h>
#include <java/sql/PreparedStatement.h>
#include <java/sql/PseudoColumnUsage.h>
#include <java/sql/Ref.h>
#include <java/sql/ResultSet.h>
#include <java/sql/ResultSetMetaData.h>
#include <java/sql/RowId.h>
#include <java/sql/RowIdLifetime.h>
#include <java/sql/SQLClientInfoException.h>
#include <java/sql/SQLData.h>
#include <java/sql/SQLDataException.h>
#include <java/sql/SQLException.h>
#include <java/sql/SQLException$1.h>
#include <java/sql/SQLFeatureNotSupportedException.h>
#include <java/sql/SQLInput.h>
#include <java/sql/SQLIntegrityConstraintViolationException.h>
#include <java/sql/SQLInvalidAuthorizationSpecException.h>
#include <java/sql/SQLNonTransientConnectionException.h>
#include <java/sql/SQLNonTransientException.h>
#include <java/sql/SQLOutput.h>
#include <java/sql/SQLPermission.h>
#include <java/sql/SQLRecoverableException.h>
#include <java/sql/SQLSyntaxErrorException.h>
#include <java/sql/SQLTimeoutException.h>
#include <java/sql/SQLTransactionRollbackException.h>
#include <java/sql/SQLTransientConnectionException.h>
#include <java/sql/SQLTransientException.h>
#include <java/sql/SQLType.h>
#include <java/sql/SQLWarning.h>
#include <java/sql/SQLXML.h>
#include <java/sql/Savepoint.h>
#include <java/sql/ShardingKey.h>
#include <java/sql/ShardingKeyBuilder.h>
#include <java/sql/Statement.h>
#include <java/sql/Struct.h>
#include <java/sql/Time.h>
#include <java/sql/Timestamp.h>
#include <java/sql/Types.h>
#include <java/sql/Wrapper.h>
#include <javax/sql/CommonDataSource.h>
#include <javax/sql/ConnectionEvent.h>
#include <javax/sql/ConnectionEventListener.h>
#include <javax/sql/ConnectionPoolDataSource.h>
#include <javax/sql/DataSource.h>
#include <javax/sql/PooledConnection.h>
#include <javax/sql/PooledConnectionBuilder.h>
#include <javax/sql/RowSet.h>
#include <javax/sql/RowSetEvent.h>
#include <javax/sql/RowSetInternal.h>
#include <javax/sql/RowSetListener.h>
#include <javax/sql/RowSetMetaData.h>
#include <javax/sql/RowSetReader.h>
#include <javax/sql/RowSetWriter.h>
#include <javax/sql/StatementEvent.h>
#include <javax/sql/StatementEventListener.h>
#include <javax/sql/XAConnection.h>
#include <javax/sql/XAConnectionBuilder.h>
#include <javax/sql/XADataSource.h>

#undef SQLXML

#define $classEntry(name, clazz) {name, clazz::load$, $getMark(clazz)}
::java::lang::ClassEntry _java$sql_classes_[] = {
	$classEntry("java.sql.Array", ::java::sql::Array),
	$classEntry("java.sql.BatchUpdateException", ::java::sql::BatchUpdateException),
	$classEntry("java.sql.Blob", ::java::sql::Blob),
	$classEntry("java.sql.CallableStatement", ::java::sql::CallableStatement),
	$classEntry("java.sql.ClientInfoStatus", ::java::sql::ClientInfoStatus),
	$classEntry("java.sql.Clob", ::java::sql::Clob),
	$classEntry("java.sql.Connection", ::java::sql::Connection),
	$classEntry("java.sql.ConnectionBuilder", ::java::sql::ConnectionBuilder),
	$classEntry("java.sql.DataTruncation", ::java::sql::DataTruncation),
	$classEntry("java.sql.DatabaseMetaData", ::java::sql::DatabaseMetaData),
	$classEntry("java.sql.Date", ::java::sql::Date),
	$classEntry("java.sql.Driver", ::java::sql::Driver),
	$classEntry("java.sql.DriverAction", ::java::sql::DriverAction),
	$classEntry("java.sql.DriverInfo", ::java::sql::DriverInfo),
	$classEntry("java.sql.DriverManager", ::java::sql::DriverManager),
	$classEntry("java.sql.DriverManager$1", ::java::sql::DriverManager$1),
	$classEntry("java.sql.DriverManager$2", ::java::sql::DriverManager$2),
	$classEntry("java.sql.DriverPropertyInfo", ::java::sql::DriverPropertyInfo),
	$classEntry("java.sql.JDBCType", ::java::sql::JDBCType),
	$classEntry("java.sql.NClob", ::java::sql::NClob),
	$classEntry("java.sql.ParameterMetaData", ::java::sql::ParameterMetaData),
	$classEntry("java.sql.PreparedStatement", ::java::sql::PreparedStatement),
	$classEntry("java.sql.PseudoColumnUsage", ::java::sql::PseudoColumnUsage),
	$classEntry("java.sql.Ref", ::java::sql::Ref),
	$classEntry("java.sql.ResultSet", ::java::sql::ResultSet),
	$classEntry("java.sql.ResultSetMetaData", ::java::sql::ResultSetMetaData),
	$classEntry("java.sql.RowId", ::java::sql::RowId),
	$classEntry("java.sql.RowIdLifetime", ::java::sql::RowIdLifetime),
	$classEntry("java.sql.SQLClientInfoException", ::java::sql::SQLClientInfoException),
	$classEntry("java.sql.SQLData", ::java::sql::SQLData),
	$classEntry("java.sql.SQLDataException", ::java::sql::SQLDataException),
	$classEntry("java.sql.SQLException", ::java::sql::SQLException),
	$classEntry("java.sql.SQLException$1", ::java::sql::SQLException$1),
	$classEntry("java.sql.SQLFeatureNotSupportedException", ::java::sql::SQLFeatureNotSupportedException),
	$classEntry("java.sql.SQLInput", ::java::sql::SQLInput),
	$classEntry("java.sql.SQLIntegrityConstraintViolationException", ::java::sql::SQLIntegrityConstraintViolationException),
	$classEntry("java.sql.SQLInvalidAuthorizationSpecException", ::java::sql::SQLInvalidAuthorizationSpecException),
	$classEntry("java.sql.SQLNonTransientConnectionException", ::java::sql::SQLNonTransientConnectionException),
	$classEntry("java.sql.SQLNonTransientException", ::java::sql::SQLNonTransientException),
	$classEntry("java.sql.SQLOutput", ::java::sql::SQLOutput),
	$classEntry("java.sql.SQLPermission", ::java::sql::SQLPermission),
	$classEntry("java.sql.SQLRecoverableException", ::java::sql::SQLRecoverableException),
	$classEntry("java.sql.SQLSyntaxErrorException", ::java::sql::SQLSyntaxErrorException),
	$classEntry("java.sql.SQLTimeoutException", ::java::sql::SQLTimeoutException),
	$classEntry("java.sql.SQLTransactionRollbackException", ::java::sql::SQLTransactionRollbackException),
	$classEntry("java.sql.SQLTransientConnectionException", ::java::sql::SQLTransientConnectionException),
	$classEntry("java.sql.SQLTransientException", ::java::sql::SQLTransientException),
	$classEntry("java.sql.SQLType", ::java::sql::SQLType),
	$classEntry("java.sql.SQLWarning", ::java::sql::SQLWarning),
	$classEntry("java.sql.SQLXML", ::java::sql::SQLXML),
	$classEntry("java.sql.Savepoint", ::java::sql::Savepoint),
	$classEntry("java.sql.ShardingKey", ::java::sql::ShardingKey),
	$classEntry("java.sql.ShardingKeyBuilder", ::java::sql::ShardingKeyBuilder),
	$classEntry("java.sql.Statement", ::java::sql::Statement),
	$classEntry("java.sql.Struct", ::java::sql::Struct),
	$classEntry("java.sql.Time", ::java::sql::Time),
	$classEntry("java.sql.Timestamp", ::java::sql::Timestamp),
	$classEntry("java.sql.Types", ::java::sql::Types),
	$classEntry("java.sql.Wrapper", ::java::sql::Wrapper),
	$classEntry("javax.sql.CommonDataSource", ::javax::sql::CommonDataSource),
	$classEntry("javax.sql.ConnectionEvent", ::javax::sql::ConnectionEvent),
	$classEntry("javax.sql.ConnectionEventListener", ::javax::sql::ConnectionEventListener),
	$classEntry("javax.sql.ConnectionPoolDataSource", ::javax::sql::ConnectionPoolDataSource),
	$classEntry("javax.sql.DataSource", ::javax::sql::DataSource),
	$classEntry("javax.sql.PooledConnection", ::javax::sql::PooledConnection),
	$classEntry("javax.sql.PooledConnectionBuilder", ::javax::sql::PooledConnectionBuilder),
	$classEntry("javax.sql.RowSet", ::javax::sql::RowSet),
	$classEntry("javax.sql.RowSetEvent", ::javax::sql::RowSetEvent),
	$classEntry("javax.sql.RowSetInternal", ::javax::sql::RowSetInternal),
	$classEntry("javax.sql.RowSetListener", ::javax::sql::RowSetListener),
	$classEntry("javax.sql.RowSetMetaData", ::javax::sql::RowSetMetaData),
	$classEntry("javax.sql.RowSetReader", ::javax::sql::RowSetReader),
	$classEntry("javax.sql.RowSetWriter", ::javax::sql::RowSetWriter),
	$classEntry("javax.sql.StatementEvent", ::javax::sql::StatementEvent),
	$classEntry("javax.sql.StatementEventListener", ::javax::sql::StatementEventListener),
	$classEntry("javax.sql.XAConnection", ::javax::sql::XAConnection),
	$classEntry("javax.sql.XAConnectionBuilder", ::javax::sql::XAConnectionBuilder),
	$classEntry("javax.sql.XADataSource", ::javax::sql::XADataSource)
};

const char* _java$sql_packages_[] = {
	"java.sql",
	"javax.sql"
};

void java$sql$PreloadClass() {
	int32_t length = $lengthOf(_java$sql_classes_);
	for (int32_t i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_java$sql_classes_[i];
		if ($hasFlag(classEntry->mark, $PRELOAD) || $hasFlag(classEntry->mark, $PREINIT)) {
			classEntry->loader(nullptr, false);
		}
	}
}

void java$sql$PreinitClass() {
	int32_t length = $lengthOf(_java$sql_classes_);
	for (int32_t i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_java$sql_classes_[i];
		if ($hasFlag(classEntry->mark, $PREINIT)) {
			classEntry->loader(nullptr, true);
		}
	}
}

void java$sql$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$sql$PreloadClass();
	} else if (eventType == JCPP_LIB_EVENT_TYPE_PREINIT_CLASS) {
		java$sql$PreinitClass();
	}
}

$StringArray* java$sql$GetPackages() {
	int32_t length = $lengthOf(_java$sql_packages_);
	$var($StringArray, packages, $new($StringArray, length));
	for (int32_t i = 0; i < length; i++) {
		packages->set(i, $str(_java$sql_packages_[i]));
	}
	return packages;
}

::java::lang::ClassEntry* java$sql$GetClassEntry($String* name) {
	int32_t begin = 0;
	int32_t end = $lengthOf(_java$sql_classes_) - 1;
	while (begin <= end) {
		int32_t mid = begin + (end - begin) / 2;
		::java::lang::ClassEntry* classEntry = &_java$sql_classes_[mid];
		int32_t ret = name->compareTo(classEntry->name);
		if (ret < 0) {
			end = mid - 1;
		} else if (ret > 0) {
			begin = mid + 1;
		} else {
			return classEntry;
		}
	}
	return nullptr;
}

$bytes* java$sql$GetResource($String* name) {
	return nullptr;
}

void java$sql::init() {
	::java$base::init();
	::java$logging::init();
	::java$transaction$xa::init();
	::java$xml::init();
	::java::lang::Library lib = {
		"java.sql", "17.35", "",
		&_java$sql_ModuleInfo_,
		java$sql$LibEventAction,
		java$sql$GetPackages,
		java$sql$GetClassEntry,
		java$sql$GetResource
	};
	$System::addLibrary(&lib);
}

#ifdef JCPP_SHARED_BUILD
extern "C" $export void JCPP_OnLoad() {
	java$sql::init();
}
#endif