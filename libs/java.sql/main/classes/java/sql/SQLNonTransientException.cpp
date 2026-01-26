#include <java/sql/SQLNonTransientException.h>

#include <java/sql/SQLException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLException = ::java::sql::SQLException;

namespace java {
	namespace sql {

$FieldInfo _SQLNonTransientException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SQLNonTransientException, serialVersionUID)},
	{}
};

$MethodInfo _SQLNonTransientException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SQLNonTransientException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLNonTransientException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLNonTransientException, init$, void, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(SQLNonTransientException, init$, void, $String*, $String*, int32_t)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLNonTransientException, init$, void, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLNonTransientException, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLNonTransientException, init$, void, $String*, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLNonTransientException, init$, void, $String*, $String*, int32_t, $Throwable*)},
	{}
};

$ClassInfo _SQLNonTransientException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.SQLNonTransientException",
	"java.sql.SQLException",
	nullptr,
	_SQLNonTransientException_FieldInfo_,
	_SQLNonTransientException_MethodInfo_
};

$Object* allocate$SQLNonTransientException($Class* clazz) {
	return $of($alloc(SQLNonTransientException));
}

void SQLNonTransientException::init$() {
	$SQLException::init$();
}

void SQLNonTransientException::init$($String* reason) {
	$SQLException::init$(reason);
}

void SQLNonTransientException::init$($String* reason, $String* SQLState) {
	$SQLException::init$(reason, SQLState);
}

void SQLNonTransientException::init$($String* reason, $String* SQLState, int32_t vendorCode) {
	$SQLException::init$(reason, SQLState, vendorCode);
}

void SQLNonTransientException::init$($Throwable* cause) {
	$SQLException::init$(cause);
}

void SQLNonTransientException::init$($String* reason, $Throwable* cause) {
	$SQLException::init$(reason, cause);
}

void SQLNonTransientException::init$($String* reason, $String* SQLState, $Throwable* cause) {
	$SQLException::init$(reason, SQLState, cause);
}

void SQLNonTransientException::init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause) {
	$SQLException::init$(reason, SQLState, vendorCode, cause);
}

SQLNonTransientException::SQLNonTransientException() {
}

SQLNonTransientException::SQLNonTransientException(const SQLNonTransientException& e) : $SQLException(e) {
}

void SQLNonTransientException::throw$() {
	throw *this;
}

$Class* SQLNonTransientException::load$($String* name, bool initialize) {
	$loadClass(SQLNonTransientException, name, initialize, &_SQLNonTransientException_ClassInfo_, allocate$SQLNonTransientException);
	return class$;
}

$Class* SQLNonTransientException::class$ = nullptr;

	} // sql
} // java