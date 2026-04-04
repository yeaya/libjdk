#include <javax/sql/XADataSource.h>
#include <java/sql/SQLFeatureNotSupportedException.h>
#include <javax/sql/XAConnection.h>
#include <javax/sql/XAConnectionBuilder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLFeatureNotSupportedException = ::java::sql::SQLFeatureNotSupportedException;
using $XAConnection = ::javax::sql::XAConnection;
using $XAConnectionBuilder = ::javax::sql::XAConnectionBuilder;

namespace javax {
	namespace sql {

$XAConnectionBuilder* XADataSource::createXAConnectionBuilder() {
	$throwNew($SQLFeatureNotSupportedException, "createXAConnectionBuilder not implemented"_s);
	$shouldNotReachHere();
}

$Class* XADataSource::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createXAConnectionBuilder", "()Ljavax/sql/XAConnectionBuilder;", nullptr, $PUBLIC, $virtualMethod(XADataSource, createXAConnectionBuilder, $XAConnectionBuilder*), "java.sql.SQLException"},
		{"getLogWriter", "()Ljava/io/PrintWriter;", nullptr, $PUBLIC | $ABSTRACT},
		{"getLoginTimeout", "()I", nullptr, $PUBLIC | $ABSTRACT},
		{"getXAConnection", "()Ljavax/sql/XAConnection;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XADataSource, getXAConnection, $XAConnection*), "java.sql.SQLException"},
		{"getXAConnection", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/sql/XAConnection;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XADataSource, getXAConnection, $XAConnection*, $String*, $String*), "java.sql.SQLException"},
		{"setLogWriter", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC | $ABSTRACT},
		{"setLoginTimeout", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sql.XADataSource",
		nullptr,
		"javax.sql.CommonDataSource",
		nullptr,
		methodInfos$$
	};
	$loadClass(XADataSource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XADataSource);
	});
	return class$;
}

$Class* XADataSource::class$ = nullptr;

	} // sql
} // javax