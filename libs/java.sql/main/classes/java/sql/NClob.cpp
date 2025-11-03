#include <java/sql/NClob.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Clob = ::java::sql::Clob;

namespace java {
	namespace sql {

$ClassInfo _NClob_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.NClob",
	nullptr,
	"java.sql.Clob"
};

$Object* allocate$NClob($Class* clazz) {
	return $of($alloc(NClob));
}

$Class* NClob::load$($String* name, bool initialize) {
	$loadClass(NClob, name, initialize, &_NClob_ClassInfo_, allocate$NClob);
	return class$;
}

$Class* NClob::class$ = nullptr;

	} // sql
} // java