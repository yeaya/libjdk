#include <TabProb$FixLayout.h>
#include <TabProb.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <jcpp.h>

#undef C

using $TabProb = ::TabProb;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TabProb$FixLayout::init$($TabProb* this$0) {
	$set(this, this$0, this$0);
}

void TabProb$FixLayout::layoutContainer($Container* C) {
	$useLocalObjectStack();
	$var($Insets, in, $nc(C)->getInsets());
	int32_t w = 200 - $nc(in)->left - $nc(in)->right;
	int32_t h = 100 - in->top - in->bottom;
	$nc($nc($(C->getComponents()))->get(0))->setBounds(in->top, in->left, w, h);
}

$Dimension* TabProb$FixLayout::minimumLayoutSize($Container* C) {
	return $new($Dimension, 200, 100);
}

$Dimension* TabProb$FixLayout::preferredLayoutSize($Container* C) {
	return $new($Dimension, 200, 100);
}

void TabProb$FixLayout::removeLayoutComponent($Component* c) {
}

void TabProb$FixLayout::addLayoutComponent($String* s, $Component* c) {
}

TabProb$FixLayout::TabProb$FixLayout() {
}

$Class* TabProb$FixLayout::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTabProb;", nullptr, $FINAL | $SYNTHETIC, $field(TabProb$FixLayout, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTabProb;)V", nullptr, 0, $method(TabProb$FixLayout, init$, void, $TabProb*)},
		{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(TabProb$FixLayout, addLayoutComponent, void, $String*, $Component*)},
		{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(TabProb$FixLayout, layoutContainer, void, $Container*)},
		{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(TabProb$FixLayout, minimumLayoutSize, $Dimension*, $Container*)},
		{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(TabProb$FixLayout, preferredLayoutSize, $Dimension*, $Container*)},
		{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(TabProb$FixLayout, removeLayoutComponent, void, $Component*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TabProb$FixLayout", "TabProb", "FixLayout", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TabProb$FixLayout",
		"java.lang.Object",
		"java.awt.LayoutManager",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TabProb"
	};
	$loadClass(TabProb$FixLayout, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TabProb$FixLayout);
	});
	return class$;
}

$Class* TabProb$FixLayout::class$ = nullptr;