#include <javax/sql/RowSetWriter.h>

#include <javax/sql/RowSetInternal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RowSetInternal = ::javax::sql::RowSetInternal;

namespace javax {
	namespace sql {

$MethodInfo _RowSetWriter_MethodInfo_[] = {
	{"writeData", "(Ljavax/sql/RowSetInternal;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSetWriter, writeData, bool, $RowSetInternal*), "java.sql.SQLException"},
	{}
};

$ClassInfo _RowSetWriter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sql.RowSetWriter",
	nullptr,
	nullptr,
	nullptr,
	_RowSetWriter_MethodInfo_
};

$Object* allocate$RowSetWriter($Class* clazz) {
	return $of($alloc(RowSetWriter));
}

$Class* RowSetWriter::load$($String* name, bool initialize) {
	$loadClass(RowSetWriter, name, initialize, &_RowSetWriter_ClassInfo_, allocate$RowSetWriter);
	return class$;
}

$Class* RowSetWriter::class$ = nullptr;

	} // sql
} // javax