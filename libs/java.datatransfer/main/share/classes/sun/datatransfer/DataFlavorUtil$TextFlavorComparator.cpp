#include <sun/datatransfer/DataFlavorUtil$TextFlavorComparator.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <sun/datatransfer/DataFlavorUtil$DataFlavorComparator.h>
#include <sun/datatransfer/DataFlavorUtil.h>
#include <jcpp.h>

#undef INSTANCE

using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DataFlavorUtil = ::sun::datatransfer::DataFlavorUtil;
using $DataFlavorUtil$DataFlavorComparator = ::sun::datatransfer::DataFlavorUtil$DataFlavorComparator;

namespace sun {
	namespace datatransfer {

$FieldInfo _DataFlavorUtil$TextFlavorComparator_FieldInfo_[] = {
	{"INSTANCE", "Lsun/datatransfer/DataFlavorUtil$TextFlavorComparator;", nullptr, $STATIC | $FINAL, $staticField(DataFlavorUtil$TextFlavorComparator, INSTANCE)},
	{}
};

$MethodInfo _DataFlavorUtil$TextFlavorComparator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DataFlavorUtil$TextFlavorComparator::*)()>(&DataFlavorUtil$TextFlavorComparator::init$))},
	{"compare", "(Ljava/awt/datatransfer/DataFlavor;Ljava/awt/datatransfer/DataFlavor;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _DataFlavorUtil$TextFlavorComparator_InnerClassesInfo_[] = {
	{"sun.datatransfer.DataFlavorUtil$TextFlavorComparator", "sun.datatransfer.DataFlavorUtil", "TextFlavorComparator", $PRIVATE | $STATIC},
	{"sun.datatransfer.DataFlavorUtil$DataFlavorComparator", "sun.datatransfer.DataFlavorUtil", "DataFlavorComparator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DataFlavorUtil$TextFlavorComparator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.datatransfer.DataFlavorUtil$TextFlavorComparator",
	"sun.datatransfer.DataFlavorUtil$DataFlavorComparator",
	nullptr,
	_DataFlavorUtil$TextFlavorComparator_FieldInfo_,
	_DataFlavorUtil$TextFlavorComparator_MethodInfo_,
	nullptr,
	nullptr,
	_DataFlavorUtil$TextFlavorComparator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.datatransfer.DataFlavorUtil"
};

$Object* allocate$DataFlavorUtil$TextFlavorComparator($Class* clazz) {
	return $of($alloc(DataFlavorUtil$TextFlavorComparator));
}

DataFlavorUtil$TextFlavorComparator* DataFlavorUtil$TextFlavorComparator::INSTANCE = nullptr;

void DataFlavorUtil$TextFlavorComparator::init$() {
	$DataFlavorUtil$DataFlavorComparator::init$();
}

int32_t DataFlavorUtil$TextFlavorComparator::compare($DataFlavor* flavor1, $DataFlavor* flavor2) {
	if ($nc(flavor1)->isFlavorTextType()) {
		if ($nc(flavor2)->isFlavorTextType()) {
			return $DataFlavorUtil$DataFlavorComparator::compare(flavor1, flavor2);
		} else {
			return 1;
		}
	} else if ($nc(flavor2)->isFlavorTextType()) {
		return -1;
	} else {
		return 0;
	}
}

int32_t DataFlavorUtil$TextFlavorComparator::compare(Object$* flavor1, Object$* flavor2) {
	return this->compare($cast($DataFlavor, flavor1), $cast($DataFlavor, flavor2));
}

void clinit$DataFlavorUtil$TextFlavorComparator($Class* class$) {
	$assignStatic(DataFlavorUtil$TextFlavorComparator::INSTANCE, $new(DataFlavorUtil$TextFlavorComparator));
}

DataFlavorUtil$TextFlavorComparator::DataFlavorUtil$TextFlavorComparator() {
}

$Class* DataFlavorUtil$TextFlavorComparator::load$($String* name, bool initialize) {
	$loadClass(DataFlavorUtil$TextFlavorComparator, name, initialize, &_DataFlavorUtil$TextFlavorComparator_ClassInfo_, clinit$DataFlavorUtil$TextFlavorComparator, allocate$DataFlavorUtil$TextFlavorComparator);
	return class$;
}

$Class* DataFlavorUtil$TextFlavorComparator::class$ = nullptr;

	} // datatransfer
} // sun