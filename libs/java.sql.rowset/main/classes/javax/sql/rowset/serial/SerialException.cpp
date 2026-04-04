#include <javax/sql/rowset/serial/SerialException.h>
#include <java/sql/SQLException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLException = ::java::sql::SQLException;

namespace javax {
	namespace sql {
		namespace rowset {
			namespace serial {

void SerialException::init$() {
	$SQLException::init$();
}

void SerialException::init$($String* msg) {
	$SQLException::init$(msg);
}

SerialException::SerialException() {
}

SerialException::SerialException(const SerialException& e) : $SQLException(e) {
}

void SerialException::throw$() {
	throw *this;
}

$Class* SerialException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SerialException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SerialException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SerialException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sql.rowset.serial.SerialException",
		"java.sql.SQLException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SerialException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SerialException));
	});
	return class$;
}

$Class* SerialException::class$ = nullptr;

			} // serial
		} // rowset
	} // sql
} // javax