#include <java/sql/SQLWarning.h>

#include <java/lang/ClassCastException.h>
#include <java/lang/Error.h>
#include <java/sql/DriverManager.h>
#include <java/sql/SQLException.h>
#include <jcpp.h>

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DriverManager = ::java::sql::DriverManager;
using $SQLException = ::java::sql::SQLException;

namespace java {
	namespace sql {

$FieldInfo _SQLWarning_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SQLWarning, serialVersionUID)},
	{}
};

$MethodInfo _SQLWarning_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(SQLWarning::*)($String*,$String*,int32_t)>(&SQLWarning::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLWarning::*)($String*,$String*)>(&SQLWarning::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLWarning::*)($String*)>(&SQLWarning::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SQLWarning::*)()>(&SQLWarning::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLWarning::*)($Throwable*)>(&SQLWarning::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLWarning::*)($String*,$Throwable*)>(&SQLWarning::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLWarning::*)($String*,$String*,$Throwable*)>(&SQLWarning::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLWarning::*)($String*,$String*,int32_t,$Throwable*)>(&SQLWarning::init$))},
	{"getNextWarning", "()Ljava/sql/SQLWarning;", nullptr, $PUBLIC},
	{"setNextWarning", "(Ljava/sql/SQLWarning;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SQLWarning_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.SQLWarning",
	"java.sql.SQLException",
	nullptr,
	_SQLWarning_FieldInfo_,
	_SQLWarning_MethodInfo_
};

$Object* allocate$SQLWarning($Class* clazz) {
	return $of($alloc(SQLWarning));
}

void SQLWarning::init$($String* reason, $String* SQLState, int32_t vendorCode) {
	$useLocalCurrentObjectStackCache();
	$SQLException::init$(reason, SQLState, vendorCode);
	$DriverManager::println($$str({"SQLWarning: reason("_s, reason, ") SQLState("_s, SQLState, ") vendor code("_s, $$str(vendorCode), ")"_s}));
}

void SQLWarning::init$($String* reason, $String* SQLState) {
	$SQLException::init$(reason, SQLState);
	$DriverManager::println($$str({"SQLWarning: reason("_s, reason, ") SQLState("_s, SQLState, ")"_s}));
}

void SQLWarning::init$($String* reason) {
	$SQLException::init$(reason);
	$DriverManager::println($$str({"SQLWarning: reason("_s, reason, ")"_s}));
}

void SQLWarning::init$() {
	$SQLException::init$();
	$DriverManager::println("SQLWarning: "_s);
}

void SQLWarning::init$($Throwable* cause) {
	$SQLException::init$(cause);
	$DriverManager::println("SQLWarning"_s);
}

void SQLWarning::init$($String* reason, $Throwable* cause) {
	$SQLException::init$(reason, cause);
	$DriverManager::println($$str({"SQLWarning : reason("_s, reason, ")"_s}));
}

void SQLWarning::init$($String* reason, $String* SQLState, $Throwable* cause) {
	$SQLException::init$(reason, SQLState, cause);
	$DriverManager::println($$str({"SQLWarning: reason("_s, reason, ") SQLState("_s, SQLState, ")"_s}));
}

void SQLWarning::init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause) {
	$useLocalCurrentObjectStackCache();
	$SQLException::init$(reason, SQLState, vendorCode, cause);
	$DriverManager::println($$str({"SQLWarning: reason("_s, reason, ") SQLState("_s, SQLState, ") vendor code("_s, $$str(vendorCode), ")"_s}));
}

SQLWarning* SQLWarning::getNextWarning() {
	try {
		return ($cast(SQLWarning, getNextException()));
	} catch ($ClassCastException& ex) {
		$throwNew($Error, "SQLWarning chain holds value that is not a SQLWarning"_s);
	}
	$shouldNotReachHere();
}

void SQLWarning::setNextWarning(SQLWarning* w) {
	setNextException(w);
}

SQLWarning::SQLWarning() {
}

SQLWarning::SQLWarning(const SQLWarning& e) : $SQLException(e) {
}

void SQLWarning::throw$() {
	throw *this;
}

$Class* SQLWarning::load$($String* name, bool initialize) {
	$loadClass(SQLWarning, name, initialize, &_SQLWarning_ClassInfo_, allocate$SQLWarning);
	return class$;
}

$Class* SQLWarning::class$ = nullptr;

	} // sql
} // java