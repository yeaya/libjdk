#include <javax/swing/ListModel.h>
#include <javax/swing/event/ListDataListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListDataListener = ::javax::swing::event::ListDataListener;

namespace javax {
	namespace swing {

$Class* ListModel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListModel, addListDataListener, void, $ListDataListener*)},
		{"getElementAt", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC | $ABSTRACT, $virtualMethod(ListModel, getElementAt, $Object*, int32_t)},
		{"getSize", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListModel, getSize, int32_t)},
		{"removeListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ListModel, removeListDataListener, void, $ListDataListener*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.ListModel",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;"
	};
	$loadClass(ListModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ListModel);
	});
	return class$;
}

$Class* ListModel::class$ = nullptr;

	} // swing
} // javax