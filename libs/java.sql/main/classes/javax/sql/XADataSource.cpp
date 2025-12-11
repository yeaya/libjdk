#include <javax/sql/XADataSource.h>

#include <java/sql/SQLFeatureNotSupportedException.h>
#include <javax/sql/XAConnection.h>
#include <javax/sql/XAConnectionBuilder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLFeatureNotSupportedException = ::java::sql::SQLFeatureNotSupportedException;
using $XAConnectionBuilder = ::javax::sql::XAConnectionBuilder;

namespace javax {
	namespace sql {

$MethodInfo _XADataSource_MethodInfo_[] = {
	{"createXAConnectionBuilder", "()Ljavax/sql/XAConnectionBuilder;", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"getLogWriter", "()Ljava/io/PrintWriter;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLoginTimeout", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getXAConnection", "()Ljavax/sql/XAConnection;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getXAConnection", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/sql/XAConnection;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setLogWriter", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLoginTimeout", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XADataSource_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sql.XADataSource",
	nullptr,
	"javax.sql.CommonDataSource",
	nullptr,
	_XADataSource_MethodInfo_
};

$Object* allocate$XADataSource($Class* clazz) {
	return $of($alloc(XADataSource));
}

$XAConnectionBuilder* XADataSource::createXAConnectionBuilder() {
	$throwNew($SQLFeatureNotSupportedException, "createXAConnectionBuilder not implemented"_s);
	$shouldNotReachHere();
}

$Class* XADataSource::load$($String* name, bool initialize) {
	$loadClass(XADataSource, name, initialize, &_XADataSource_ClassInfo_, allocate$XADataSource);
	return class$;
}

$Class* XADataSource::class$ = nullptr;

	} // sql
} // javax