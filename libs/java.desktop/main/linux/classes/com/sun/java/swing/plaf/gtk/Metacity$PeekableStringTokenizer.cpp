#include <com/sun/java/swing/plaf/gtk/Metacity$PeekableStringTokenizer.h>
#include <com/sun/java/swing/plaf/gtk/Metacity.h>
#include <java/util/StringTokenizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringTokenizer = ::java::util::StringTokenizer;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

void Metacity$PeekableStringTokenizer::init$($String* str, $String* delim, bool returnDelims) {
	$StringTokenizer::init$(str, delim, returnDelims);
	$set(this, token, nullptr);
	peek();
}

$String* Metacity$PeekableStringTokenizer::peek() {
	if (this->token == nullptr) {
		$set(this, token, nextToken());
	}
	return this->token;
}

bool Metacity$PeekableStringTokenizer::hasMoreTokens() {
	return (this->token != nullptr || $StringTokenizer::hasMoreTokens());
}

$String* Metacity$PeekableStringTokenizer::nextToken() {
	$useLocalObjectStack();
	if (this->token != nullptr) {
		$var($String, t, this->token);
		$set(this, token, nullptr);
		if (hasMoreTokens()) {
			peek();
		}
		return t;
	} else {
		$var($String, token, $StringTokenizer::nextToken());
		while (true) {
			bool var$1 = $nc(token)->equals(" "_s);
			bool var$0 = var$1 || token->equals("\t"_s);
			if (!(var$0 && hasMoreTokens())) {
				break;
			}
			{
				$assign(token, $StringTokenizer::nextToken());
			}
		}
		return token;
	}
}

Metacity$PeekableStringTokenizer::Metacity$PeekableStringTokenizer() {
}

$Class* Metacity$PeekableStringTokenizer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"token", "Ljava/lang/String;", nullptr, 0, $field(Metacity$PeekableStringTokenizer, token)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(Metacity$PeekableStringTokenizer, init$, void, $String*, $String*, bool)},
		{"hasMoreTokens", "()Z", nullptr, $PUBLIC, $virtualMethod(Metacity$PeekableStringTokenizer, hasMoreTokens, bool)},
		{"nextToken", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Metacity$PeekableStringTokenizer, nextToken, $String*)},
		{"peek", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Metacity$PeekableStringTokenizer, peek, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.Metacity$PeekableStringTokenizer", "com.sun.java.swing.plaf.gtk.Metacity", "PeekableStringTokenizer", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.Metacity$PeekableStringTokenizer",
		"java.util.StringTokenizer",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.gtk.Metacity"
	};
	$loadClass(Metacity$PeekableStringTokenizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Metacity$PeekableStringTokenizer);
	});
	return class$;
}

$Class* Metacity$PeekableStringTokenizer::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com