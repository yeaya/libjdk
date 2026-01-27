#include <javax/swing/text/html/CSSParser$CSSParserCallback.h>

#include <javax/swing/text/html/CSSParser.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _CSSParser$CSSParserCallback_MethodInfo_[] = {
	{"endRule", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CSSParser$CSSParserCallback, endRule, void)},
	{"handleImport", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CSSParser$CSSParserCallback, handleImport, void, $String*)},
	{"handleProperty", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CSSParser$CSSParserCallback, handleProperty, void, $String*)},
	{"handleSelector", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CSSParser$CSSParserCallback, handleSelector, void, $String*)},
	{"handleValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CSSParser$CSSParserCallback, handleValue, void, $String*)},
	{"startRule", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CSSParser$CSSParserCallback, startRule, void)},
	{}
};

$InnerClassInfo _CSSParser$CSSParserCallback_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSSParser$CSSParserCallback", "javax.swing.text.html.CSSParser", "CSSParserCallback", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CSSParser$CSSParserCallback_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"javax.swing.text.html.CSSParser$CSSParserCallback",
	nullptr,
	nullptr,
	nullptr,
	_CSSParser$CSSParserCallback_MethodInfo_,
	nullptr,
	nullptr,
	_CSSParser$CSSParserCallback_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSSParser"
};

$Object* allocate$CSSParser$CSSParserCallback($Class* clazz) {
	return $of($alloc(CSSParser$CSSParserCallback));
}

$Class* CSSParser$CSSParserCallback::load$($String* name, bool initialize) {
	$loadClass(CSSParser$CSSParserCallback, name, initialize, &_CSSParser$CSSParserCallback_ClassInfo_, allocate$CSSParser$CSSParserCallback);
	return class$;
}

$Class* CSSParser$CSSParserCallback::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax