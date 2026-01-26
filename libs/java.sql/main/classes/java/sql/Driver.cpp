#include <java/sql/Driver.h>

#include <java/sql/Connection.h>
#include <java/sql/DriverPropertyInfo.h>
#include <java/util/Properties.h>
#include <java/util/logging/Logger.h>
#include <jcpp.h>

using $DriverPropertyInfoArray = $Array<::java::sql::DriverPropertyInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Connection = ::java::sql::Connection;
using $Properties = ::java::util::Properties;
using $Logger = ::java::util::logging::Logger;

namespace java {
	namespace sql {

$MethodInfo _Driver_MethodInfo_[] = {
	{"acceptsURL", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Driver, acceptsURL, bool, $String*), "java.sql.SQLException"},
	{"connect", "(Ljava/lang/String;Ljava/util/Properties;)Ljava/sql/Connection;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Driver, connect, $Connection*, $String*, $Properties*), "java.sql.SQLException"},
	{"getMajorVersion", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Driver, getMajorVersion, int32_t)},
	{"getMinorVersion", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Driver, getMinorVersion, int32_t)},
	{"getParentLogger", "()Ljava/util/logging/Logger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Driver, getParentLogger, $Logger*), "java.sql.SQLFeatureNotSupportedException"},
	{"getPropertyInfo", "(Ljava/lang/String;Ljava/util/Properties;)[Ljava/sql/DriverPropertyInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Driver, getPropertyInfo, $DriverPropertyInfoArray*, $String*, $Properties*), "java.sql.SQLException"},
	{"jdbcCompliant", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Driver, jdbcCompliant, bool)},
	{}
};

$ClassInfo _Driver_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.Driver",
	nullptr,
	nullptr,
	nullptr,
	_Driver_MethodInfo_
};

$Object* allocate$Driver($Class* clazz) {
	return $of($alloc(Driver));
}

$Class* Driver::load$($String* name, bool initialize) {
	$loadClass(Driver, name, initialize, &_Driver_ClassInfo_, allocate$Driver);
	return class$;
}

$Class* Driver::class$ = nullptr;

	} // sql
} // java