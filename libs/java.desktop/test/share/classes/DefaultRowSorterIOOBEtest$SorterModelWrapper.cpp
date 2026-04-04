#include <DefaultRowSorterIOOBEtest$SorterModelWrapper.h>
#include <DefaultRowSorterIOOBEtest.h>
#include <javax/swing/DefaultRowSorter$ModelWrapper.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

using $DefaultRowSorterIOOBEtest = ::DefaultRowSorterIOOBEtest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultRowSorter$ModelWrapper = ::javax::swing::DefaultRowSorter$ModelWrapper;

void DefaultRowSorterIOOBEtest$SorterModelWrapper::init$() {
	$DefaultRowSorter$ModelWrapper::init$();
}

$Object* DefaultRowSorterIOOBEtest$SorterModelWrapper::getModel() {
	$init($DefaultRowSorterIOOBEtest);
	return $DefaultRowSorterIOOBEtest::tableModel;
}

int32_t DefaultRowSorterIOOBEtest$SorterModelWrapper::getColumnCount() {
	$init($DefaultRowSorterIOOBEtest);
	return $nc($DefaultRowSorterIOOBEtest::tableModel)->getColumnCount();
}

int32_t DefaultRowSorterIOOBEtest$SorterModelWrapper::getRowCount() {
	$init($DefaultRowSorterIOOBEtest);
	return $nc($DefaultRowSorterIOOBEtest::tableModel)->getRowCount();
}

$Object* DefaultRowSorterIOOBEtest$SorterModelWrapper::getValueAt(int32_t row, int32_t column) {
	$init($DefaultRowSorterIOOBEtest);
	return $nc($DefaultRowSorterIOOBEtest::tableModel)->getValueAt(row, column);
}

$Object* DefaultRowSorterIOOBEtest$SorterModelWrapper::getIdentifier(int32_t row) {
	return $of($Integer::valueOf(row));
}

DefaultRowSorterIOOBEtest$SorterModelWrapper::DefaultRowSorterIOOBEtest$SorterModelWrapper() {
}

$Class* DefaultRowSorterIOOBEtest$SorterModelWrapper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultRowSorterIOOBEtest$SorterModelWrapper, init$, void)},
		{"getColumnCount", "()I", nullptr, $PUBLIC, $virtualMethod(DefaultRowSorterIOOBEtest$SorterModelWrapper, getColumnCount, int32_t)},
		{"getIdentifier", "(I)Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(DefaultRowSorterIOOBEtest$SorterModelWrapper, getIdentifier, $Object*, int32_t)},
		{"getModel", "()Ljavax/swing/table/TableModel;", nullptr, $PUBLIC, $virtualMethod(DefaultRowSorterIOOBEtest$SorterModelWrapper, getModel, $Object*)},
		{"getRowCount", "()I", nullptr, $PUBLIC, $virtualMethod(DefaultRowSorterIOOBEtest$SorterModelWrapper, getRowCount, int32_t)},
		{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultRowSorterIOOBEtest$SorterModelWrapper, getValueAt, $Object*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DefaultRowSorterIOOBEtest$SorterModelWrapper", "DefaultRowSorterIOOBEtest", "SorterModelWrapper", $STATIC},
		{"javax.swing.DefaultRowSorter$ModelWrapper", "javax.swing.DefaultRowSorter", "ModelWrapper", $PROTECTED | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DefaultRowSorterIOOBEtest$SorterModelWrapper",
		"javax.swing.DefaultRowSorter$ModelWrapper",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/DefaultRowSorter$ModelWrapper<Ljavax/swing/table/TableModel;Ljava/lang/Integer;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"DefaultRowSorterIOOBEtest"
	};
	$loadClass(DefaultRowSorterIOOBEtest$SorterModelWrapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultRowSorterIOOBEtest$SorterModelWrapper);
	});
	return class$;
}

$Class* DefaultRowSorterIOOBEtest$SorterModelWrapper::class$ = nullptr;