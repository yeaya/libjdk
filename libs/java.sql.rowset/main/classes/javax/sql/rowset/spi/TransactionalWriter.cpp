#include <javax/sql/rowset/spi/TransactionalWriter.h>
#include <java/sql/Savepoint.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Savepoint = ::java::sql::Savepoint;

namespace javax {
	namespace sql {
		namespace rowset {
			namespace spi {

$Class* TransactionalWriter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"commit", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TransactionalWriter, commit, void), "java.sql.SQLException"},
		{"rollback", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TransactionalWriter, rollback, void), "java.sql.SQLException"},
		{"rollback", "(Ljava/sql/Savepoint;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TransactionalWriter, rollback, void, $Savepoint*), "java.sql.SQLException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sql.rowset.spi.TransactionalWriter",
		nullptr,
		"javax.sql.RowSetWriter",
		nullptr,
		methodInfos$$
	};
	$loadClass(TransactionalWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransactionalWriter);
	});
	return class$;
}

$Class* TransactionalWriter::class$ = nullptr;

			} // spi
		} // rowset
	} // sql
} // javax