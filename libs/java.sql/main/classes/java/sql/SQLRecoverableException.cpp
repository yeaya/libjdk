#include <java/sql/SQLRecoverableException.h>

#include <java/sql/SQLException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLException = ::java::sql::SQLException;

namespace java {
	namespace sql {

$FieldInfo _SQLRecoverableException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SQLRecoverableException, serialVersionUID)},
	{}
};

$MethodInfo _SQLRecoverableException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SQLRecoverableException::*)()>(&SQLRecoverableException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLRecoverableException::*)($String*)>(&SQLRecoverableException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLRecoverableException::*)($String*,$String*)>(&SQLRecoverableException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(SQLRecoverableException::*)($String*,$String*,int32_t)>(&SQLRecoverableException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLRecoverableException::*)($Throwable*)>(&SQLRecoverableException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLRecoverableException::*)($String*,$Throwable*)>(&SQLRecoverableException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLRecoverableException::*)($String*,$String*,$Throwable*)>(&SQLRecoverableException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLRecoverableException::*)($String*,$String*,int32_t,$Throwable*)>(&SQLRecoverableException::init$))},
	{}
};

$ClassInfo _SQLRecoverableException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.SQLRecoverableException",
	"java.sql.SQLException",
	nullptr,
	_SQLRecoverableException_FieldInfo_,
	_SQLRecoverableException_MethodInfo_
};

$Object* allocate$SQLRecoverableException($Class* clazz) {
	return $of($alloc(SQLRecoverableException));
}

void SQLRecoverableException::init$() {
	$SQLException::init$();
}

void SQLRecoverableException::init$($String* reason) {
	$SQLException::init$(reason);
}

void SQLRecoverableException::init$($String* reason, $String* SQLState) {
	$SQLException::init$(reason, SQLState);
}

void SQLRecoverableException::init$($String* reason, $String* SQLState, int32_t vendorCode) {
	$SQLException::init$(reason, SQLState, vendorCode);
}

void SQLRecoverableException::init$($Throwable* cause) {
	$SQLException::init$(cause);
}

void SQLRecoverableException::init$($String* reason, $Throwable* cause) {
	$SQLException::init$(reason, cause);
}

void SQLRecoverableException::init$($String* reason, $String* SQLState, $Throwable* cause) {
	$SQLException::init$(reason, SQLState, cause);
}

void SQLRecoverableException::init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause) {
	$SQLException::init$(reason, SQLState, vendorCode, cause);
}

SQLRecoverableException::SQLRecoverableException() {
}

SQLRecoverableException::SQLRecoverableException(const SQLRecoverableException& e) : $SQLException(e) {
}

void SQLRecoverableException::throw$() {
	throw *this;
}

$Class* SQLRecoverableException::load$($String* name, bool initialize) {
	$loadClass(SQLRecoverableException, name, initialize, &_SQLRecoverableException_ClassInfo_, allocate$SQLRecoverableException);
	return class$;
}

$Class* SQLRecoverableException::class$ = nullptr;

	} // sql
} // java