#include <javax/sql/DataSource.h>

#include <java/sql/Connection.h>
#include <java/sql/ConnectionBuilder.h>
#include <java/sql/SQLFeatureNotSupportedException.h>
#include <javax/sql/CommonDataSource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Connection = ::java::sql::Connection;
using $ConnectionBuilder = ::java::sql::ConnectionBuilder;
using $SQLFeatureNotSupportedException = ::java::sql::SQLFeatureNotSupportedException;
using $CommonDataSource = ::javax::sql::CommonDataSource;

namespace javax {
	namespace sql {

$MethodInfo _DataSource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"createConnectionBuilder", "()Ljava/sql/ConnectionBuilder;", nullptr, $PUBLIC, $virtualMethod(DataSource, createConnectionBuilder, $ConnectionBuilder*), "java.sql.SQLException"},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getConnection", "()Ljava/sql/Connection;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataSource, getConnection, $Connection*), "java.sql.SQLException"},
	{"getConnection", "(Ljava/lang/String;Ljava/lang/String;)Ljava/sql/Connection;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataSource, getConnection, $Connection*, $String*, $String*), "java.sql.SQLException"},
	{"getLogWriter", "()Ljava/io/PrintWriter;", nullptr, $PUBLIC | $ABSTRACT},
	{"setLogWriter", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLoginTimeout", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getLoginTimeout", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DataSource_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sql.DataSource",
	nullptr,
	"javax.sql.CommonDataSource,java.sql.Wrapper",
	nullptr,
	_DataSource_MethodInfo_
};

$Object* allocate$DataSource($Class* clazz) {
	return $of($alloc(DataSource));
}

int32_t DataSource::hashCode() {
	 return this->$CommonDataSource::hashCode();
}

bool DataSource::equals(Object$* arg0) {
	 return this->$CommonDataSource::equals(arg0);
}

$Object* DataSource::clone() {
	 return this->$CommonDataSource::clone();
}

$String* DataSource::toString() {
	 return this->$CommonDataSource::toString();
}

void DataSource::finalize() {
	this->$CommonDataSource::finalize();
}

$ConnectionBuilder* DataSource::createConnectionBuilder() {
	$throwNew($SQLFeatureNotSupportedException, "createConnectionBuilder not implemented"_s);
	$shouldNotReachHere();
}

$Class* DataSource::load$($String* name, bool initialize) {
	$loadClass(DataSource, name, initialize, &_DataSource_ClassInfo_, allocate$DataSource);
	return class$;
}

$Class* DataSource::class$ = nullptr;

	} // sql
} // javax