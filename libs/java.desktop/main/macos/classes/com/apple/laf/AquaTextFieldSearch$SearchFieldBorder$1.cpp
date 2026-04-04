#include <com/apple/laf/AquaTextFieldSearch$SearchFieldBorder$1.h>
#include <com/apple/laf/AquaTextFieldSearch$SearchFieldBorder.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Container.h>
#include <jcpp.h>

using $AquaTextFieldSearch$SearchFieldBorder = ::com::apple::laf::AquaTextFieldSearch$SearchFieldBorder;
using $BorderLayout = ::java::awt::BorderLayout;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaTextFieldSearch$SearchFieldBorder$1::init$($AquaTextFieldSearch$SearchFieldBorder* this$0, int32_t hgap, int32_t vgap) {
	$set(this, this$0, this$0);
	$BorderLayout::init$(hgap, vgap);
}

void AquaTextFieldSearch$SearchFieldBorder$1::layoutContainer($Container* target) {
	this->this$0->doingLayout = true;
	$BorderLayout::layoutContainer(target);
	this->this$0->doingLayout = false;
}

AquaTextFieldSearch$SearchFieldBorder$1::AquaTextFieldSearch$SearchFieldBorder$1() {
}

$Class* AquaTextFieldSearch$SearchFieldBorder$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaTextFieldSearch$SearchFieldBorder;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$SearchFieldBorder$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaTextFieldSearch$SearchFieldBorder;II)V", nullptr, 0, $method(AquaTextFieldSearch$SearchFieldBorder$1, init$, void, $AquaTextFieldSearch$SearchFieldBorder*, int32_t, int32_t)},
		{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(AquaTextFieldSearch$SearchFieldBorder$1, layoutContainer, void, $Container*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaTextFieldSearch$SearchFieldBorder",
		"getCustomLayout",
		"()Ljava/awt/LayoutManager;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTextFieldSearch$SearchFieldBorder", "com.apple.laf.AquaTextFieldSearch", "SearchFieldBorder", $STATIC},
		{"com.apple.laf.AquaTextFieldSearch$SearchFieldBorder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTextFieldSearch$SearchFieldBorder$1",
		"java.awt.BorderLayout",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTextFieldSearch"
	};
	$loadClass(AquaTextFieldSearch$SearchFieldBorder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaTextFieldSearch$SearchFieldBorder$1));
	});
	return class$;
}

$Class* AquaTextFieldSearch$SearchFieldBorder$1::class$ = nullptr;

		} // laf
	} // apple
} // com