#include <sun/awt/AWTAccessor$CursorAccessor.h>
#include <java/awt/Cursor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $Cursor = ::java::awt::Cursor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* AWTAccessor$CursorAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getPData", "(Ljava/awt/Cursor;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$CursorAccessor, getPData, int64_t, $Cursor*)},
		{"getType", "(Ljava/awt/Cursor;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$CursorAccessor, getType, int32_t, $Cursor*)},
		{"setPData", "(Ljava/awt/Cursor;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$CursorAccessor, setPData, void, $Cursor*, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$CursorAccessor", "sun.awt.AWTAccessor", "CursorAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$CursorAccessor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.AWTAccessor"
	};
	$loadClass(AWTAccessor$CursorAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$CursorAccessor);
	});
	return class$;
}

$Class* AWTAccessor$CursorAccessor::class$ = nullptr;

	} // awt
} // sun