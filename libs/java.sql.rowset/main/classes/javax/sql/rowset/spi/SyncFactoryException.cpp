#include <javax/sql/rowset/spi/SyncFactoryException.h>
#include <java/sql/SQLException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLException = ::java::sql::SQLException;

namespace javax {
	namespace sql {
		namespace rowset {
			namespace spi {

void SyncFactoryException::init$() {
	$SQLException::init$();
}

void SyncFactoryException::init$($String* msg) {
	$SQLException::init$(msg);
}

SyncFactoryException::SyncFactoryException() {
}

SyncFactoryException::SyncFactoryException(const SyncFactoryException& e) : $SQLException(e) {
}

void SyncFactoryException::throw$() {
	throw *this;
}

$Class* SyncFactoryException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SyncFactoryException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SyncFactoryException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SyncFactoryException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sql.rowset.spi.SyncFactoryException",
		"java.sql.SQLException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SyncFactoryException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SyncFactoryException));
	});
	return class$;
}

$Class* SyncFactoryException::class$ = nullptr;

			} // spi
		} // rowset
	} // sql
} // javax