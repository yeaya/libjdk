#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <jcpp.h>

#undef MULTIPLE_INTERVAL_SELECTION
#undef SINGLE_INTERVAL_SELECTION
#undef SINGLE_SELECTION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;

namespace javax {
	namespace swing {

$ints* ListSelectionModel::getSelectedIndices() {
	$useLocalObjectStack();
	int32_t iMin = getMinSelectionIndex();
	int32_t iMax = getMaxSelectionIndex();
	if ((iMin < 0) || (iMax < 0)) {
		return $new($ints, 0);
	}
	$var($ints, rvTmp, $new($ints, 1 + (iMax - iMin)));
	int32_t n = 0;
	for (int32_t i = iMin; i <= iMax; ++i) {
		if (isSelectedIndex(i)) {
			rvTmp->set(n++, i);
		}
	}
	$var($ints, rv, $new($ints, n));
	$System::arraycopy(rvTmp, 0, rv, 0, n);
	return rv;
}

int32_t ListSelectionModel::getSelectedItemsCount() {
	int32_t iMin = getMinSelectionIndex();
	int32_t iMax = getMaxSelectionIndex();
	int32_t count = 0;
	for (int32_t i = iMin; i <= iMax; ++i) {
		if (isSelectedIndex(i)) {
			++count;
		}
	}
	return count;
}

$Class* ListSelectionModel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SINGLE_SELECTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ListSelectionModel, SINGLE_SELECTION)},
		{"SINGLE_INTERVAL_SELECTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ListSelectionModel, SINGLE_INTERVAL_SELECTION)},
		{"MULTIPLE_INTERVAL_SELECTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ListSelectionModel, MULTIPLE_INTERVAL_SELECTION)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"addListSelectionListener", "(Ljavax/swing/event/ListSelectionListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListSelectionModel, addListSelectionListener, void, $ListSelectionListener*)},
		{"addSelectionInterval", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListSelectionModel, addSelectionInterval, void, int32_t, int32_t)},
		{"clearSelection", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListSelectionModel, clearSelection, void)},
		{"getAnchorSelectionIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListSelectionModel, getAnchorSelectionIndex, int32_t)},
		{"getLeadSelectionIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListSelectionModel, getLeadSelectionIndex, int32_t)},
		{"getMaxSelectionIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListSelectionModel, getMaxSelectionIndex, int32_t)},
		{"getMinSelectionIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListSelectionModel, getMinSelectionIndex, int32_t)},
		{"getSelectedIndices", "()[I", nullptr, $PUBLIC, $virtualMethod(ListSelectionModel, getSelectedIndices, $ints*)},
		{"getSelectedItemsCount", "()I", nullptr, $PUBLIC, $virtualMethod(ListSelectionModel, getSelectedItemsCount, int32_t)},
		{"getSelectionMode", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListSelectionModel, getSelectionMode, int32_t)},
		{"getValueIsAdjusting", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListSelectionModel, getValueIsAdjusting, bool)},
		{"insertIndexInterval", "(IIZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListSelectionModel, insertIndexInterval, void, int32_t, int32_t, bool)},
		{"isSelectedIndex", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListSelectionModel, isSelectedIndex, bool, int32_t)},
		{"isSelectionEmpty", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListSelectionModel, isSelectionEmpty, bool)},
		{"removeIndexInterval", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListSelectionModel, removeIndexInterval, void, int32_t, int32_t)},
		{"removeListSelectionListener", "(Ljavax/swing/event/ListSelectionListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListSelectionModel, removeListSelectionListener, void, $ListSelectionListener*)},
		{"removeSelectionInterval", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListSelectionModel, removeSelectionInterval, void, int32_t, int32_t)},
		{"setAnchorSelectionIndex", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListSelectionModel, setAnchorSelectionIndex, void, int32_t)},
		{"setLeadSelectionIndex", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListSelectionModel, setLeadSelectionIndex, void, int32_t)},
		{"setSelectionInterval", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListSelectionModel, setSelectionInterval, void, int32_t, int32_t)},
		{"setSelectionMode", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListSelectionModel, setSelectionMode, void, int32_t)},
		{"setValueIsAdjusting", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListSelectionModel, setValueIsAdjusting, void, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.ListSelectionModel",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ListSelectionModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ListSelectionModel);
	});
	return class$;
}

$Class* ListSelectionModel::class$ = nullptr;

	} // swing
} // javax