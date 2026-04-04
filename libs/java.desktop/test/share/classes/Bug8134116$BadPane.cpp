#include <Bug8134116$BadPane.h>
#include <Bug8134116.h>
#include <java/awt/Component.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Icon = ::javax::swing::Icon;
using $JTabbedPane = ::javax::swing::JTabbedPane;

void Bug8134116$BadPane::init$() {
	$JTabbedPane::init$();
	$set(this, titles, $new($ArrayList, 1));
}

void Bug8134116$BadPane::insertTab($String* title, $Icon* icon, $Component* component, $String* tip, int32_t index) {
	$nc(this->titles)->add(index, title);
	$JTabbedPane::insertTab(""_s, icon, component, tip, index);
}

$String* Bug8134116$BadPane::getTitleAt(int32_t i) {
	return $cast($String, $nc(this->titles)->get(i));
}

Bug8134116$BadPane::Bug8134116$BadPane() {
}

$Class* Bug8134116$BadPane::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"titles", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(Bug8134116$BadPane, titles)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Bug8134116$BadPane, init$, void)},
		{"getTitleAt", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Bug8134116$BadPane, getTitleAt, $String*, int32_t)},
		{"insertTab", "(Ljava/lang/String;Ljavax/swing/Icon;Ljava/awt/Component;Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(Bug8134116$BadPane, insertTab, void, $String*, $Icon*, $Component*, $String*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Bug8134116$BadPane", "Bug8134116", "BadPane", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Bug8134116$BadPane",
		"javax.swing.JTabbedPane",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Bug8134116"
	};
	$loadClass(Bug8134116$BadPane, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Bug8134116$BadPane));
	});
	return class$;
}

$Class* Bug8134116$BadPane::class$ = nullptr;