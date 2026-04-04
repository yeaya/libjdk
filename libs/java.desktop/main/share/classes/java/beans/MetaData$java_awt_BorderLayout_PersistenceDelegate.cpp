#include <java/beans/MetaData$java_awt_BorderLayout_PersistenceDelegate.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/MetaData.h>
#include <jcpp.h>

#undef CENTER
#undef CONSTRAINTS
#undef EAST
#undef LINE_END
#undef LINE_START
#undef NORTH
#undef PAGE_END
#undef PAGE_START
#undef SOUTH
#undef WEST

using $BorderLayout = ::java::awt::BorderLayout;
using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$StringArray* MetaData$java_awt_BorderLayout_PersistenceDelegate::CONSTRAINTS = nullptr;

void MetaData$java_awt_BorderLayout_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$java_awt_BorderLayout_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalObjectStack();
	$DefaultPersistenceDelegate::initialize(type, oldInstance, newInstance, out);
	$var($BorderLayout, oldLayout, $cast($BorderLayout, oldInstance));
	$var($BorderLayout, newLayout, $cast($BorderLayout, newInstance));
	{
		$var($StringArray, arr$, MetaData$java_awt_BorderLayout_PersistenceDelegate::CONSTRAINTS);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, constraints, arr$->get(i$));
			{
				$var($Object, oldC, $nc(oldLayout)->getLayoutComponent(constraints));
				$var($Object, newC, $nc(newLayout)->getLayoutComponent(constraints));
				if (oldC != nullptr && newC == nullptr) {
					invokeStatement(oldInstance, "addLayoutComponent"_s, $$new($ObjectArray, {
						oldC,
						constraints
					}), out);
				}
			}
		}
	}
}

void MetaData$java_awt_BorderLayout_PersistenceDelegate::clinit$($Class* clazz) {
	$init($BorderLayout);
	$assignStatic(MetaData$java_awt_BorderLayout_PersistenceDelegate::CONSTRAINTS, $new($StringArray, {
		$BorderLayout::NORTH,
		$BorderLayout::SOUTH,
		$BorderLayout::EAST,
		$BorderLayout::WEST,
		$BorderLayout::CENTER,
		$BorderLayout::PAGE_START,
		$BorderLayout::PAGE_END,
		$BorderLayout::LINE_START,
		$BorderLayout::LINE_END
	}));
}

MetaData$java_awt_BorderLayout_PersistenceDelegate::MetaData$java_awt_BorderLayout_PersistenceDelegate() {
}

$Class* MetaData$java_awt_BorderLayout_PersistenceDelegate::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CONSTRAINTS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetaData$java_awt_BorderLayout_PersistenceDelegate, CONSTRAINTS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$java_awt_BorderLayout_PersistenceDelegate, init$, void)},
		{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED, $virtualMethod(MetaData$java_awt_BorderLayout_PersistenceDelegate, initialize, void, $Class*, Object$*, Object$*, $Encoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$java_awt_BorderLayout_PersistenceDelegate", "java.beans.MetaData", "java_awt_BorderLayout_PersistenceDelegate", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$java_awt_BorderLayout_PersistenceDelegate",
		"java.beans.DefaultPersistenceDelegate",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.MetaData"
	};
	$loadClass(MetaData$java_awt_BorderLayout_PersistenceDelegate, name, initialize, &classInfo$$, MetaData$java_awt_BorderLayout_PersistenceDelegate::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$java_awt_BorderLayout_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$java_awt_BorderLayout_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java