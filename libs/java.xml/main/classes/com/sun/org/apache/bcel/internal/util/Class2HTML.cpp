#include <com/sun/org/apache/bcel/internal/util/Class2HTML.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ClassParser.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Field.h>
#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/Method.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/util/AttributeHTML.h>
#include <com/sun/org/apache/bcel/internal/util/CodeHTML.h>
#include <com/sun/org/apache/bcel/internal/util/ConstantHTML.h>
#include <com/sun/org/apache/bcel/internal/util/MethodHTML.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $MethodArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Method>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ClassParser = ::com::sun::org::apache::bcel::internal::classfile::ClassParser;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $JavaClass = ::com::sun::org::apache::bcel::internal::classfile::JavaClass;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $AttributeHTML = ::com::sun::org::apache::bcel::internal::util::AttributeHTML;
using $CodeHTML = ::com::sun::org::apache::bcel::internal::util::CodeHTML;
using $ConstantHTML = ::com::sun::org::apache::bcel::internal::util::ConstantHTML;
using $MethodHTML = ::com::sun::org::apache::bcel::internal::util::MethodHTML;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

$FieldInfo _Class2HTML_FieldInfo_[] = {
	{"java_class", "Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PRIVATE | $FINAL, $field(Class2HTML, java_class)},
	{"dir", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Class2HTML, dir)},
	{"class_package", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Class2HTML, class_package)},
	{"class_name", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Class2HTML, class_name)},
	{"constant_pool", "Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PRIVATE | $STATIC, $staticField(Class2HTML, constant_pool)},
	{"basic_types", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Class2HTML, basic_types)},
	{}
};

$MethodInfo _Class2HTML_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Class2HTML, init$, void, $JavaClass*, $String*), "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Class2HTML, main, void, $StringArray*), "java.io.IOException"},
	{"referenceClass", "(I)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Class2HTML, referenceClass, $String*, int32_t)},
	{"referenceType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Class2HTML, referenceType, $String*, $String*)},
	{"toHTML", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Class2HTML, toHTML, $String*, $String*)},
	{"writeMainHTML", "(Lcom/sun/org/apache/bcel/internal/util/AttributeHTML;)V", nullptr, $PRIVATE, $method(Class2HTML, writeMainHTML, void, $AttributeHTML*), "java.io.IOException"},
	{}
};

$ClassInfo _Class2HTML_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.util.Class2HTML",
	"java.lang.Object",
	nullptr,
	_Class2HTML_FieldInfo_,
	_Class2HTML_MethodInfo_
};

$Object* allocate$Class2HTML($Class* clazz) {
	return $of($alloc(Class2HTML));
}

$String* Class2HTML::class_package = nullptr;
$String* Class2HTML::class_name = nullptr;
$ConstantPool* Class2HTML::constant_pool = nullptr;
$Set* Class2HTML::basic_types = nullptr;

void Class2HTML::init$($JavaClass* java_class, $String* dir) {
	$useLocalCurrentObjectStackCache();
	$var($MethodArray, methods, $nc(java_class)->getMethods());
	$set(this, java_class, java_class);
	$set(this, dir, dir);
	$assignStatic(Class2HTML::class_name, java_class->getClassName());
	$assignStatic(Class2HTML::constant_pool, java_class->getConstantPool());
	int32_t index = $nc(Class2HTML::class_name)->lastIndexOf((int32_t)u'.');
	if (index > -1) {
		$assignStatic(Class2HTML::class_package, $nc(Class2HTML::class_name)->substring(0, index));
	} else {
		$assignStatic(Class2HTML::class_package, ""_s);
	}
	$var($ConstantHTML, constant_html, $new($ConstantHTML, dir, Class2HTML::class_name, Class2HTML::class_package, methods, Class2HTML::constant_pool));
	$var($AttributeHTML, attribute_html, $new($AttributeHTML, dir, Class2HTML::class_name, Class2HTML::constant_pool, constant_html));
	$new($MethodHTML, dir, Class2HTML::class_name, methods, $(java_class->getFields()), constant_html, attribute_html);
	writeMainHTML(attribute_html);
	$new($CodeHTML, dir, Class2HTML::class_name, methods, Class2HTML::constant_pool, constant_html);
	attribute_html->close();
}

void Class2HTML::main($StringArray* argv) {
	$init(Class2HTML);
	$useLocalCurrentObjectStackCache();
	$var($StringArray, file_name, $new($StringArray, $nc(argv)->length));
	int32_t files = 0;
	$var($ClassParser, parser, nullptr);
	$var($JavaClass, java_class, nullptr);
	$var($String, zip_file, nullptr);
	$init($File);
	char16_t sep = $File::separatorChar;
	$var($String, dir, $str({"."_s, $$str(sep)}));
	for (int32_t i = 0; i < argv->length; ++i) {
		if ($nc(argv->get(i))->charAt(0) == u'-') {
			if ($nc(argv->get(i))->equals("-d"_s)) {
				$assign(dir, argv->get(++i));
				if (!$nc(dir)->endsWith($$str({""_s, $$str(sep)}))) {
					$assign(dir, $str({dir, $$str(sep)}));
				}
				$var($File, store, $new($File, dir));
				if (!store->isDirectory()) {
					bool created = store->mkdirs();
					if (!created) {
						if (!store->isDirectory()) {
							$nc($System::out)->println($$str({"Tried to create the directory "_s, dir, " but failed"_s}));
						}
					}
				}
			} else if ($nc(argv->get(i))->equals("-zip"_s)) {
				$assign(zip_file, argv->get(++i));
			} else {
				$nc($System::out)->println($$str({"Unknown option "_s, argv->get(i)}));
			}
		} else {
			file_name->set(files++, argv->get(i));
		}
	}
	if (files == 0) {
		$nc($System::err)->println("Class2HTML: No input files specified."_s);
	} else {
		for (int32_t i = 0; i < files; ++i) {
			$nc($System::out)->print($$str({"Processing "_s, file_name->get(i), "..."_s}));
			if (zip_file == nullptr) {
				$assign(parser, $new($ClassParser, file_name->get(i)));
			} else {
				$assign(parser, $new($ClassParser, zip_file, file_name->get(i)));
			}
			$assign(java_class, $nc(parser)->parse());
			$new(Class2HTML, java_class, dir);
			$nc($System::out)->println("Done."_s);
		}
	}
}

$String* Class2HTML::referenceClass(int32_t index) {
	$init(Class2HTML);
	$useLocalCurrentObjectStackCache();
	$var($String, str, $nc(Class2HTML::constant_pool)->getConstantString(index, $Const::CONSTANT_Class));
	$assign(str, $Utility::compactClassName(str));
	$assign(str, $Utility::compactClassName(str, $$str({Class2HTML::class_package, "."_s}), true));
	return $str({"<A HREF=\""_s, Class2HTML::class_name, "_cp.html#cp"_s, $$str(index), "\" TARGET=ConstantPool>"_s, str, "</A>"_s});
}

$String* Class2HTML::referenceType($String* type) {
	$init(Class2HTML);
	$useLocalCurrentObjectStackCache();
	$var($String, short_type, $Utility::compactClassName(type));
	$assign(short_type, $Utility::compactClassName(short_type, $$str({Class2HTML::class_package, "."_s}), true));
	int32_t index = $nc(type)->indexOf((int32_t)u'[');
	$var($String, base_type, type);
	if (index > -1) {
		$assign(base_type, type->substring(0, index));
	}
	if ($nc(Class2HTML::basic_types)->contains(base_type)) {
		return $str({"<FONT COLOR=\"#00FF00\">"_s, type, "</FONT>"_s});
	}
	return $str({"<A HREF=\""_s, base_type, ".html\" TARGET=_top>"_s, short_type, "</A>"_s});
}

$String* Class2HTML::toHTML($String* str) {
	$init(Class2HTML);
	$var($StringBuilder, buf, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(str)->length(); ++i) {
		char16_t ch = 0;
		switch (ch = str->charAt(i)) {
		case u'<':
			{
				buf->append("&lt;"_s);
				break;
			}
		case u'>':
			{
				buf->append("&gt;"_s);
				break;
			}
		case u'\n':
			{
				buf->append("\\n"_s);
				break;
			}
		case u'\r':
			{
				buf->append("\\r"_s);
				break;
			}
		default:
			{
				buf->append(ch);
			}
		}
	}
	return buf->toString();
}

void Class2HTML::writeMainHTML($AttributeHTML* attribute_html) {
	$useLocalCurrentObjectStackCache();
	{
		$var($PrintWriter, file, $new($PrintWriter, static_cast<$OutputStream*>($$new($FileOutputStream, $$str({this->dir, Class2HTML::class_name, ".html"_s})))));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					file->println($$str({"<HTML>\n<HEAD><TITLE>Documentation for "_s, Class2HTML::class_name, "</TITLE></HEAD>\n<FRAMESET BORDER=1 cols=\"30%,*\">\n<FRAMESET BORDER=1 rows=\"80%,*\">\n<FRAME NAME=\"ConstantPool\" SRC=\""_s, Class2HTML::class_name, "_cp.html\"\n MARGINWIDTH=\"0\" MARGINHEIGHT=\"0\" FRAMEBORDER=\"1\" SCROLLING=\"AUTO\">\n<FRAME NAME=\"Attributes\" SRC=\""_s, Class2HTML::class_name, "_attributes.html\"\n MARGINWIDTH=\"0\" MARGINHEIGHT=\"0\" FRAMEBORDER=\"1\" SCROLLING=\"AUTO\">\n</FRAMESET>\n<FRAMESET BORDER=1 rows=\"80%,*\">\n<FRAME NAME=\"Code\" SRC=\""_s, Class2HTML::class_name, "_code.html\"\n MARGINWIDTH=0 MARGINHEIGHT=0 FRAMEBORDER=1 SCROLLING=\"AUTO\">\n<FRAME NAME=\"Methods\" SRC=\""_s, Class2HTML::class_name, "_methods.html\"\n MARGINWIDTH=0 MARGINHEIGHT=0 FRAMEBORDER=1 SCROLLING=\"AUTO\">\n</FRAMESET></FRAMESET></HTML>"_s}));
				} catch ($Throwable& t$) {
					try {
						file->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				file->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$var($AttributeArray, attributes, $nc(this->java_class)->getAttributes());
	for (int32_t i = 0; i < $nc(attributes)->length; ++i) {
		$nc(attribute_html)->writeAttribute(attributes->get(i), $$str({"class"_s, $$str(i)}));
	}
}

void clinit$Class2HTML($Class* class$) {
	$assignStatic(Class2HTML::basic_types, $new($HashSet));
	{
		$nc(Class2HTML::basic_types)->add("int"_s);
		$nc(Class2HTML::basic_types)->add("short"_s);
		$nc(Class2HTML::basic_types)->add("boolean"_s);
		$nc(Class2HTML::basic_types)->add("void"_s);
		$nc(Class2HTML::basic_types)->add("char"_s);
		$nc(Class2HTML::basic_types)->add("byte"_s);
		$nc(Class2HTML::basic_types)->add("long"_s);
		$nc(Class2HTML::basic_types)->add("double"_s);
		$nc(Class2HTML::basic_types)->add("float"_s);
	}
}

Class2HTML::Class2HTML() {
}

$Class* Class2HTML::load$($String* name, bool initialize) {
	$loadClass(Class2HTML, name, initialize, &_Class2HTML_ClassInfo_, clinit$Class2HTML, allocate$Class2HTML);
	return class$;
}

$Class* Class2HTML::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com