#include <javax/accessibility/AccessibleTable.h>

#include <javax/accessibility/Accessible.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;

namespace javax {
	namespace accessibility {

$MethodInfo _AccessibleTable_MethodInfo_[] = {
	{"getAccessibleAt", "(II)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, getAccessibleAt, $Accessible*, int32_t, int32_t)},
	{"getAccessibleCaption", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, getAccessibleCaption, $Accessible*)},
	{"getAccessibleColumnCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, getAccessibleColumnCount, int32_t)},
	{"getAccessibleColumnDescription", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, getAccessibleColumnDescription, $Accessible*, int32_t)},
	{"getAccessibleColumnExtentAt", "(II)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, getAccessibleColumnExtentAt, int32_t, int32_t, int32_t)},
	{"getAccessibleColumnHeader", "()Ljavax/accessibility/AccessibleTable;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, getAccessibleColumnHeader, AccessibleTable*)},
	{"getAccessibleRowCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, getAccessibleRowCount, int32_t)},
	{"getAccessibleRowDescription", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, getAccessibleRowDescription, $Accessible*, int32_t)},
	{"getAccessibleRowExtentAt", "(II)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, getAccessibleRowExtentAt, int32_t, int32_t, int32_t)},
	{"getAccessibleRowHeader", "()Ljavax/accessibility/AccessibleTable;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, getAccessibleRowHeader, AccessibleTable*)},
	{"getAccessibleSummary", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, getAccessibleSummary, $Accessible*)},
	{"getSelectedAccessibleColumns", "()[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, getSelectedAccessibleColumns, $ints*)},
	{"getSelectedAccessibleRows", "()[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, getSelectedAccessibleRows, $ints*)},
	{"isAccessibleColumnSelected", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, isAccessibleColumnSelected, bool, int32_t)},
	{"isAccessibleRowSelected", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, isAccessibleRowSelected, bool, int32_t)},
	{"isAccessibleSelected", "(II)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, isAccessibleSelected, bool, int32_t, int32_t)},
	{"setAccessibleCaption", "(Ljavax/accessibility/Accessible;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, setAccessibleCaption, void, $Accessible*)},
	{"setAccessibleColumnDescription", "(ILjavax/accessibility/Accessible;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, setAccessibleColumnDescription, void, int32_t, $Accessible*)},
	{"setAccessibleColumnHeader", "(Ljavax/accessibility/AccessibleTable;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, setAccessibleColumnHeader, void, AccessibleTable*)},
	{"setAccessibleRowDescription", "(ILjavax/accessibility/Accessible;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, setAccessibleRowDescription, void, int32_t, $Accessible*)},
	{"setAccessibleRowHeader", "(Ljavax/accessibility/AccessibleTable;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, setAccessibleRowHeader, void, AccessibleTable*)},
	{"setAccessibleSummary", "(Ljavax/accessibility/Accessible;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTable, setAccessibleSummary, void, $Accessible*)},
	{}
};

$ClassInfo _AccessibleTable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.accessibility.AccessibleTable",
	nullptr,
	nullptr,
	nullptr,
	_AccessibleTable_MethodInfo_
};

$Object* allocate$AccessibleTable($Class* clazz) {
	return $of($alloc(AccessibleTable));
}

$Class* AccessibleTable::load$($String* name, bool initialize) {
	$loadClass(AccessibleTable, name, initialize, &_AccessibleTable_ClassInfo_, allocate$AccessibleTable);
	return class$;
}

$Class* AccessibleTable::class$ = nullptr;

	} // accessibility
} // javax