#include <java/sql/SQLTransientException.h>

#include <java/sql/SQLException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLException = ::java::sql::SQLException;

namespace java {
	namespace sql {

$FieldInfo _SQLTransientException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SQLTransientException, serialVersionUID)},
	{}
};

$MethodInfo _SQLTransientException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SQLTransientException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLTransientException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLTransientException, init$, void, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(SQLTransientException, init$, void, $String*, $String*, int32_t)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLTransientException, init$, void, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLTransientException, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLTransientException, init$, void, $String*, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SQLTransientException, init$, void, $String*, $String*, int32_t, $Throwable*)},
	{}
};

$ClassInfo _SQLTransientException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.SQLTransientException",
	"java.sql.SQLException",
	nullptr,
	_SQLTransientException_FieldInfo_,
	_SQLTransientException_MethodInfo_
};

$Object* allocate$SQLTransientException($Class* clazz) {
	return $of($alloc(SQLTransientException));
}

void SQLTransientException::init$() {
	$SQLException::init$();
}

void SQLTransientException::init$($String* reason) {
	$SQLException::init$(reason);
}

void SQLTransientException::init$($String* reason, $String* SQLState) {
	$SQLException::init$(reason, SQLState);
}

void SQLTransientException::init$($String* reason, $String* SQLState, int32_t vendorCode) {
	$SQLException::init$(reason, SQLState, vendorCode);
}

void SQLTransientException::init$($Throwable* cause) {
	$SQLException::init$(cause);
}

void SQLTransientException::init$($String* reason, $Throwable* cause) {
	$SQLException::init$(reason, cause);
}

void SQLTransientException::init$($String* reason, $String* SQLState, $Throwable* cause) {
	$SQLException::init$(reason, SQLState, cause);
}

void SQLTransientException::init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause) {
	$SQLException::init$(reason, SQLState, vendorCode, cause);
}

SQLTransientException::SQLTransientException() {
}

SQLTransientException::SQLTransientException(const SQLTransientException& e) : $SQLException(e) {
}

void SQLTransientException::throw$() {
	throw *this;
}

$Class* SQLTransientException::load$($String* name, bool initialize) {
	$loadClass(SQLTransientException, name, initialize, &_SQLTransientException_ClassInfo_, allocate$SQLTransientException);
	return class$;
}

$Class* SQLTransientException::class$ = nullptr;

	} // sql
} // java