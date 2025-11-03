#include <java/sql/SQLFeatureNotSupportedException.h>

#include <java/sql/SQLNonTransientException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLNonTransientException = ::java::sql::SQLNonTransientException;

namespace java {
	namespace sql {

$FieldInfo _SQLFeatureNotSupportedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SQLFeatureNotSupportedException, serialVersionUID)},
	{}
};

$MethodInfo _SQLFeatureNotSupportedException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SQLFeatureNotSupportedException::*)()>(&SQLFeatureNotSupportedException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLFeatureNotSupportedException::*)($String*)>(&SQLFeatureNotSupportedException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLFeatureNotSupportedException::*)($String*,$String*)>(&SQLFeatureNotSupportedException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(SQLFeatureNotSupportedException::*)($String*,$String*,int32_t)>(&SQLFeatureNotSupportedException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLFeatureNotSupportedException::*)($Throwable*)>(&SQLFeatureNotSupportedException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLFeatureNotSupportedException::*)($String*,$Throwable*)>(&SQLFeatureNotSupportedException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLFeatureNotSupportedException::*)($String*,$String*,$Throwable*)>(&SQLFeatureNotSupportedException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLFeatureNotSupportedException::*)($String*,$String*,int32_t,$Throwable*)>(&SQLFeatureNotSupportedException::init$))},
	{}
};

$ClassInfo _SQLFeatureNotSupportedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.SQLFeatureNotSupportedException",
	"java.sql.SQLNonTransientException",
	nullptr,
	_SQLFeatureNotSupportedException_FieldInfo_,
	_SQLFeatureNotSupportedException_MethodInfo_
};

$Object* allocate$SQLFeatureNotSupportedException($Class* clazz) {
	return $of($alloc(SQLFeatureNotSupportedException));
}

void SQLFeatureNotSupportedException::init$() {
	$SQLNonTransientException::init$();
}

void SQLFeatureNotSupportedException::init$($String* reason) {
	$SQLNonTransientException::init$(reason);
}

void SQLFeatureNotSupportedException::init$($String* reason, $String* SQLState) {
	$SQLNonTransientException::init$(reason, SQLState);
}

void SQLFeatureNotSupportedException::init$($String* reason, $String* SQLState, int32_t vendorCode) {
	$SQLNonTransientException::init$(reason, SQLState, vendorCode);
}

void SQLFeatureNotSupportedException::init$($Throwable* cause) {
	$SQLNonTransientException::init$(cause);
}

void SQLFeatureNotSupportedException::init$($String* reason, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, cause);
}

void SQLFeatureNotSupportedException::init$($String* reason, $String* SQLState, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, SQLState, cause);
}

void SQLFeatureNotSupportedException::init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause) {
	$SQLNonTransientException::init$(reason, SQLState, vendorCode, cause);
}

SQLFeatureNotSupportedException::SQLFeatureNotSupportedException() {
}

SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(const SQLFeatureNotSupportedException& e) : $SQLNonTransientException(e) {
}

void SQLFeatureNotSupportedException::throw$() {
	throw *this;
}

$Class* SQLFeatureNotSupportedException::load$($String* name, bool initialize) {
	$loadClass(SQLFeatureNotSupportedException, name, initialize, &_SQLFeatureNotSupportedException_ClassInfo_, allocate$SQLFeatureNotSupportedException);
	return class$;
}

$Class* SQLFeatureNotSupportedException::class$ = nullptr;

	} // sql
} // java