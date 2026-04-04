#include <java/sql/SQLFeatureNotSupportedException.h>
#include <java/sql/SQLNonTransientException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLNonTransientException = ::java::sql::SQLNonTransientException;

namespace java {
	namespace sql {

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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SQLFeatureNotSupportedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SQLFeatureNotSupportedException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLFeatureNotSupportedException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLFeatureNotSupportedException, init$, void, $String*, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(SQLFeatureNotSupportedException, init$, void, $String*, $String*, int32_t)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLFeatureNotSupportedException, init$, void, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLFeatureNotSupportedException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLFeatureNotSupportedException, init$, void, $String*, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLFeatureNotSupportedException, init$, void, $String*, $String*, int32_t, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.sql.SQLFeatureNotSupportedException",
		"java.sql.SQLNonTransientException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SQLFeatureNotSupportedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SQLFeatureNotSupportedException));
	});
	return class$;
}

$Class* SQLFeatureNotSupportedException::class$ = nullptr;

	} // sql
} // java