#include <jdk/internal/shellsupport/doc/JavadocFormatter.h>
#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/source/util/DocTrees.h>
#include <com/sun/source/util/JavacTask.h>
#include <java/io/Writer.h>
#include <java/lang/InternalError.h>
#include <java/lang/Iterable.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/util/Arrays.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <java/util/ResourceBundle.h>
#include <javax/lang/model/element/Name.h>
#include <javax/tools/DiagnosticListener.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaCompiler$CompilationTask.h>
#include <javax/tools/JavaCompiler.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/ToolProvider.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter$1.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter$2.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter$FormatJavadocScanner.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter$Sections.h>
#include <jcpp.h>

#undef CODE_HIGHLIGHT
#undef CODE_RESET
#undef CODE_UNDERLINE
#undef HTML
#undef INDENT
#undef MAX_LINE_LENGTH
#undef PARAMS
#undef RETURNS
#undef SHORTEST_LINE
#undef THROWS
#undef TYPE_PARAMS

using $DocCommentTree = ::com::sun::source::doctree::DocCommentTree;
using $DocTrees = ::com::sun::source::util::DocTrees;
using $JavacTask = ::com::sun::source::util::JavacTask;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $Arrays = ::java::util::Arrays;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Name = ::javax::lang::model::element::Name;
using $DiagnosticListener = ::javax::tools::DiagnosticListener;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $ToolProvider = ::javax::tools::ToolProvider;
using $JavadocFormatter$1 = ::jdk::internal::shellsupport::doc::JavadocFormatter$1;
using $JavadocFormatter$2 = ::jdk::internal::shellsupport::doc::JavadocFormatter$2;
using $JavadocFormatter$FormatJavadocScanner = ::jdk::internal::shellsupport::doc::JavadocFormatter$FormatJavadocScanner;
using $JavadocFormatter$HtmlTag = ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag;
using $JavadocFormatter$Sections = ::jdk::internal::shellsupport::doc::JavadocFormatter$Sections;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

$String* JavadocFormatter::CODE_RESET = nullptr;
$String* JavadocFormatter::CODE_HIGHLIGHT = nullptr;
$String* JavadocFormatter::CODE_UNDERLINE = nullptr;
$Map* JavadocFormatter::docSections = nullptr;
$String* JavadocFormatter::inlineReturns = nullptr;

void JavadocFormatter::init$(int32_t lineLimit, bool escapeSequencesSupported) {
	this->lineLimit = lineLimit;
	this->escapeSequencesSupported = escapeSequencesSupported;
}

$String* JavadocFormatter::formatJavadoc($String* header, $String* javadoc) {
	$useLocalObjectStack();
	try {
		$var($StringBuilder, result, $new($StringBuilder));
		result->append($(escape(JavadocFormatter::CODE_HIGHLIGHT)))->append(header)->append($(escape(JavadocFormatter::CODE_RESET)))->append("\n"_s);
		if (javadoc == nullptr) {
			return result->toString();
		}
		$var($JavacTask, task, $cast($JavacTask, $$nc($ToolProvider::getSystemJavaCompiler())->getTask(nullptr, nullptr, nullptr, nullptr, nullptr, nullptr)));
		$var($DocTrees, trees, $DocTrees::instance(task));
		$init($JavaFileObject$Kind);
		$var($DocCommentTree, docComment, $nc(trees)->getDocCommentTree($$new($JavadocFormatter$1, this, $$new($URI, "mem://doc.html"_s), $JavaFileObject$Kind::HTML, javadoc)));
		$$new($JavadocFormatter$FormatJavadocScanner, this, result, task)->scan(docComment, nullptr);
		addNewLineIfNeeded(result);
		return result->toString();
	} catch ($URISyntaxException& ex) {
		$throwNew($InternalError, "Unexpected exception"_s, ex);
	}
	$shouldNotReachHere();
}

$String* JavadocFormatter::escape($String* sequence) {
	return this->escapeSequencesSupported ? sequence : ""_s;
}

$String* JavadocFormatter::indentString(int32_t indent) {
	$init(JavadocFormatter);
	$var($chars, content, $new($chars, indent));
	$Arrays::fill(content, u' ');
	return $new($String, content);
}

void JavadocFormatter::reflow($StringBuilder* text, int32_t from, int32_t indent, int32_t limit) {
	$init(JavadocFormatter);
	$useLocalObjectStack();
	int32_t lineStart = from;
	while (lineStart > 0 && $nc(text)->charAt(lineStart - 1) != u'\n') {
		--lineStart;
	}
	int32_t lineChars = from - lineStart;
	int32_t pointer = from;
	int32_t lastSpace = -1;
	while (pointer < $nc(text)->length()) {
		if (text->charAt(pointer) == u' ') {
			lastSpace = pointer;
		}
		if (lineChars >= limit) {
			if (lastSpace != (-1)) {
				text->setCharAt(lastSpace, u'\n');
				text->insert(lastSpace + 1, $(indentString(indent)));
				lineChars = indent + pointer - lastSpace - 1;
				pointer += indent;
				lastSpace = -1;
			}
		}
		++lineChars;
		++pointer;
	}
}

void JavadocFormatter::addNewLineIfNeeded($StringBuilder* text) {
	$init(JavadocFormatter);
	bool var$0 = $nc(text)->length() > 0;
	if (var$0 && text->charAt(text->length() - 1) != u'\n') {
		text->append("\n"_s);
	}
}

void JavadocFormatter::addSpaceIfNeeded($StringBuilder* text) {
	$init(JavadocFormatter);
	if ($nc(text)->length() == 0) {
		return;
	}
	char16_t last = text->charAt(text->length() - 1);
	if (last != u' ' && last != u'\n') {
		text->append(" "_s);
	}
}

$JavadocFormatter$HtmlTag* JavadocFormatter::getHtmlTag($Name* name) {
	$init(JavadocFormatter);
	$JavadocFormatter$HtmlTag* tag = $JavadocFormatter$HtmlTag::get(name);
	return tag != nullptr ? tag : $JavadocFormatter$HtmlTag::HTML;
}

$Map* JavadocFormatter::countTableColumns($DocCommentTree* dct) {
	$init(JavadocFormatter);
	$useLocalObjectStack();
	$var($Map, result, $new($IdentityHashMap));
	$$new($JavadocFormatter$2, result)->scan(dct, nullptr);
	return result;
}

void JavadocFormatter::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(JavadocFormatter::CODE_RESET, "\u001b[0m"_s);
	$assignStatic(JavadocFormatter::CODE_HIGHLIGHT, "\u001b[1m"_s);
	$assignStatic(JavadocFormatter::CODE_UNDERLINE, "\u001b[4m"_s);
	$beforeCallerSensitive();
	$assignStatic(JavadocFormatter::docSections, $new($LinkedHashMap));
	{
		$var($ResourceBundle, bundle, $ResourceBundle::getBundle("jdk.internal.shellsupport.doc.resources.javadocformatter"_s));
		$init($JavadocFormatter$Sections);
		JavadocFormatter::docSections->put($JavadocFormatter$Sections::TYPE_PARAMS, $($nc(bundle)->getString("CAP_TypeParameters"_s)));
		JavadocFormatter::docSections->put($JavadocFormatter$Sections::PARAMS, $(bundle->getString("CAP_Parameters"_s)));
		JavadocFormatter::docSections->put($JavadocFormatter$Sections::RETURNS, $(bundle->getString("CAP_Returns"_s)));
		JavadocFormatter::docSections->put($JavadocFormatter$Sections::THROWS, $(bundle->getString("CAP_Thrown_Exceptions"_s)));
		$assignStatic(JavadocFormatter::inlineReturns, bundle->getString("Inline_Returns"_s));
	}
}

JavadocFormatter::JavadocFormatter() {
}

$Class* JavadocFormatter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CODE_RESET", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavadocFormatter, CODE_RESET)},
		{"CODE_HIGHLIGHT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavadocFormatter, CODE_HIGHLIGHT)},
		{"CODE_UNDERLINE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavadocFormatter, CODE_UNDERLINE)},
		{"lineLimit", "I", nullptr, $PRIVATE | $FINAL, $field(JavadocFormatter, lineLimit)},
		{"escapeSequencesSupported", "Z", nullptr, $PRIVATE | $FINAL, $field(JavadocFormatter, escapeSequencesSupported)},
		{"MAX_LINE_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JavadocFormatter, MAX_LINE_LENGTH)},
		{"SHORTEST_LINE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JavadocFormatter, SHORTEST_LINE)},
		{"INDENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JavadocFormatter, INDENT)},
		{"docSections", "Ljava/util/Map;", "Ljava/util/Map<Ljdk/internal/shellsupport/doc/JavadocFormatter$Sections;Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JavadocFormatter, docSections)},
		{"inlineReturns", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavadocFormatter, inlineReturns)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IZ)V", nullptr, $PUBLIC, $method(JavadocFormatter, init$, void, int32_t, bool)},
		{"addNewLineIfNeeded", "(Ljava/lang/StringBuilder;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JavadocFormatter, addNewLineIfNeeded, void, $StringBuilder*)},
		{"addSpaceIfNeeded", "(Ljava/lang/StringBuilder;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JavadocFormatter, addSpaceIfNeeded, void, $StringBuilder*)},
		{"countTableColumns", "(Lcom/sun/source/doctree/DocCommentTree;)Ljava/util/Map;", "(Lcom/sun/source/doctree/DocCommentTree;)Ljava/util/Map<Lcom/sun/source/doctree/StartElementTree;Ljava/lang/Integer;>;", $PRIVATE | $STATIC, $staticMethod(JavadocFormatter, countTableColumns, $Map*, $DocCommentTree*)},
		{"escape", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(JavadocFormatter, escape, $String*, $String*)},
		{"formatJavadoc", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JavadocFormatter, formatJavadoc, $String*, $String*, $String*)},
		{"getHtmlTag", "(Ljavax/lang/model/element/Name;)Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PRIVATE | $STATIC, $staticMethod(JavadocFormatter, getHtmlTag, $JavadocFormatter$HtmlTag*, $Name*)},
		{"indentString", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(JavadocFormatter, indentString, $String*, int32_t)},
		{"reflow", "(Ljava/lang/StringBuilder;III)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JavadocFormatter, reflow, void, $StringBuilder*, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.shellsupport.doc.JavadocFormatter$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"jdk.internal.shellsupport.doc.JavadocFormatter$Sections", "jdk.internal.shellsupport.doc.JavadocFormatter", "Sections", $PRIVATE | $STATIC | $ABSTRACT | $ENUM},
		{"jdk.internal.shellsupport.doc.JavadocFormatter$FormatJavadocScanner", "jdk.internal.shellsupport.doc.JavadocFormatter", "FormatJavadocScanner", $PRIVATE},
		{"jdk.internal.shellsupport.doc.JavadocFormatter$HtmlTag", "jdk.internal.shellsupport.doc.JavadocFormatter", "HtmlTag", $STATIC | $FINAL | $ENUM},
		{"jdk.internal.shellsupport.doc.JavadocFormatter$2", nullptr, nullptr, 0},
		{"jdk.internal.shellsupport.doc.JavadocFormatter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.shellsupport.doc.JavadocFormatter",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.shellsupport.doc.JavadocFormatter$3,jdk.internal.shellsupport.doc.JavadocFormatter$Sections,jdk.internal.shellsupport.doc.JavadocFormatter$Sections$4,jdk.internal.shellsupport.doc.JavadocFormatter$Sections$3,jdk.internal.shellsupport.doc.JavadocFormatter$Sections$2,jdk.internal.shellsupport.doc.JavadocFormatter$Sections$1,jdk.internal.shellsupport.doc.JavadocFormatter$FormatJavadocScanner,jdk.internal.shellsupport.doc.JavadocFormatter$HtmlTag,jdk.internal.shellsupport.doc.JavadocFormatter$2,jdk.internal.shellsupport.doc.JavadocFormatter$1"
	};
	$loadClass(JavadocFormatter, name, initialize, &classInfo$$, JavadocFormatter::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocFormatter);
	});
	return class$;
}

$Class* JavadocFormatter::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk