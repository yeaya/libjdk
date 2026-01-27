#include <javax/swing/BoundedRangeModel.h>

#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

$MethodInfo _BoundedRangeModel_MethodInfo_[] = {
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BoundedRangeModel, addChangeListener, void, $ChangeListener*)},
	{"getExtent", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BoundedRangeModel, getExtent, int32_t)},
	{"getMaximum", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BoundedRangeModel, getMaximum, int32_t)},
	{"getMinimum", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BoundedRangeModel, getMinimum, int32_t)},
	{"getValue", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BoundedRangeModel, getValue, int32_t)},
	{"getValueIsAdjusting", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BoundedRangeModel, getValueIsAdjusting, bool)},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BoundedRangeModel, removeChangeListener, void, $ChangeListener*)},
	{"setExtent", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BoundedRangeModel, setExtent, void, int32_t)},
	{"setMaximum", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BoundedRangeModel, setMaximum, void, int32_t)},
	{"setMinimum", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BoundedRangeModel, setMinimum, void, int32_t)},
	{"setRangeProperties", "(IIIIZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BoundedRangeModel, setRangeProperties, void, int32_t, int32_t, int32_t, int32_t, bool)},
	{"setValue", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BoundedRangeModel, setValue, void, int32_t)},
	{"setValueIsAdjusting", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BoundedRangeModel, setValueIsAdjusting, void, bool)},
	{}
};

$ClassInfo _BoundedRangeModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.BoundedRangeModel",
	nullptr,
	nullptr,
	nullptr,
	_BoundedRangeModel_MethodInfo_
};

$Object* allocate$BoundedRangeModel($Class* clazz) {
	return $of($alloc(BoundedRangeModel));
}

$Class* BoundedRangeModel::load$($String* name, bool initialize) {
	$loadClass(BoundedRangeModel, name, initialize, &_BoundedRangeModel_ClassInfo_, allocate$BoundedRangeModel);
	return class$;
}

$Class* BoundedRangeModel::class$ = nullptr;

	} // swing
} // javax