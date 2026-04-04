#include <javax/sql/rowset/RowSetWarning.h>
#include <java/lang/Error.h>
#include <java/sql/SQLException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLException = ::java::sql::SQLException;

namespace javax {
	namespace sql {
		namespace rowset {

void RowSetWarning::init$($String* reason) {
	$SQLException::init$(reason);
}

void RowSetWarning::init$() {
	$SQLException::init$();
}

void RowSetWarning::init$($String* reason, $String* SQLState) {
	$SQLException::init$(reason, SQLState);
}

void RowSetWarning::init$($String* reason, $String* SQLState, int32_t vendorCode) {
	$SQLException::init$(reason, SQLState, vendorCode);
}

RowSetWarning* RowSetWarning::getNextWarning() {
	$var($SQLException, warning, getNextException());
	if (warning == nullptr || $instanceOf(RowSetWarning, warning)) {
		return $cast(RowSetWarning, warning);
	} else {
		$throwNew($Error, "RowSetWarning chain holds value that is not a RowSetWarning: "_s);
	}
}

void RowSetWarning::setNextWarning(RowSetWarning* warning) {
	setNextException(warning);
}

RowSetWarning::RowSetWarning() {
}

RowSetWarning::RowSetWarning(const RowSetWarning& e) : $SQLException(e) {
}

void RowSetWarning::throw$() {
	throw *this;
}

$Class* RowSetWarning::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(RowSetWarning, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RowSetWarning, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(RowSetWarning, init$, void)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RowSetWarning, init$, void, $String*, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(RowSetWarning, init$, void, $String*, $String*, int32_t)},
		{"getNextWarning", "()Ljavax/sql/rowset/RowSetWarning;", nullptr, $PUBLIC, $virtualMethod(RowSetWarning, getNextWarning, RowSetWarning*)},
		{"setNextWarning", "(Ljavax/sql/rowset/RowSetWarning;)V", nullptr, $PUBLIC, $virtualMethod(RowSetWarning, setNextWarning, void, RowSetWarning*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sql.rowset.RowSetWarning",
		"java.sql.SQLException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RowSetWarning, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(RowSetWarning));
	});
	return class$;
}

$Class* RowSetWarning::class$ = nullptr;

		} // rowset
	} // sql
} // javax