#include <com/sun/java/swing/plaf/gtk/GTKStyleFactory$ComplexKey.h>
#include <com/sun/java/swing/plaf/gtk/GTKEngine$WidgetType.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyleFactory.h>
#include <jcpp.h>

using $GTKEngine$WidgetType = ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

void GTKStyleFactory$ComplexKey::init$($GTKEngine$WidgetType* wt, $ObjectArray* args) {
	$set(this, wt, wt);
	$set(this, args, args);
}

int32_t GTKStyleFactory$ComplexKey::hashCode() {
	$useLocalObjectStack();
	int32_t hash = this->wt->hashCode();
	if (this->args != nullptr) {
		$var($ObjectArray, arr$, this->args);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, arg, arr$->get(i$));
			{
				hash = hash * 29 + (arg == nullptr ? 0 : arg->hashCode());
			}
		}
	}
	return hash;
}

bool GTKStyleFactory$ComplexKey::equals(Object$* o) {
	$useLocalObjectStack();
	if (!($instanceOf(GTKStyleFactory$ComplexKey, o))) {
		return false;
	}
	$var(GTKStyleFactory$ComplexKey, that, $cast(GTKStyleFactory$ComplexKey, o));
	if (this->wt == $nc(that)->wt) {
		if (this->args == nullptr && that->args == nullptr) {
			return true;
		}
		if (this->args != nullptr && that->args != nullptr && this->args->length == that->args->length) {
			for (int32_t i = 0; i < this->args->length; ++i) {
				$var($Object0, a1, this->args->get(i));
				$var($Object0, a2, that->args->get(i));
				if (!(a1 == nullptr ? a2 == nullptr : a1->equals(a2))) {
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

$String* GTKStyleFactory$ComplexKey::toString() {
	$var($String, str, $str({"ComplexKey[wt="_s, this->wt}));
	if (this->args != nullptr) {
		$plusAssign(str, ",args=["_s);
		for (int32_t i = 0; i < this->args->length; ++i) {
			$plusAssign(str, this->args->get(i));
			if (i < this->args->length - 1) {
				$plusAssign(str, ","_s);
			}
		}
		$plusAssign(str, "]"_s);
	}
	$plusAssign(str, "]"_s);
	return str;
}

GTKStyleFactory$ComplexKey::GTKStyleFactory$ComplexKey() {
}

$Class* GTKStyleFactory$ComplexKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"wt", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PRIVATE | $FINAL, $field(GTKStyleFactory$ComplexKey, wt)},
		{"args", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(GTKStyleFactory$ComplexKey, args)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;[Ljava/lang/Object;)V", nullptr, $TRANSIENT, $method(GTKStyleFactory$ComplexKey, init$, void, $GTKEngine$WidgetType*, $ObjectArray*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(GTKStyleFactory$ComplexKey, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(GTKStyleFactory$ComplexKey, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(GTKStyleFactory$ComplexKey, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKStyleFactory$ComplexKey", "com.sun.java.swing.plaf.gtk.GTKStyleFactory", "ComplexKey", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.GTKStyleFactory$ComplexKey",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.gtk.GTKStyleFactory"
	};
	$loadClass(GTKStyleFactory$ComplexKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GTKStyleFactory$ComplexKey);
	});
	return class$;
}

$Class* GTKStyleFactory$ComplexKey::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com