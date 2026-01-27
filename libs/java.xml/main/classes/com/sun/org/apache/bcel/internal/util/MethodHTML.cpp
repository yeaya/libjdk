#include <com/sun/org/apache/bcel/internal/util/MethodHTML.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/AccessFlags.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/Code.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/ExceptionTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/Field.h>
#include <com/sun/org/apache/bcel/internal/classfile/Method.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/util/AttributeHTML.h>
#include <com/sun/org/apache/bcel/internal/util/Class2HTML.h>
#include <com/sun/org/apache/bcel/internal/util/ConstantHTML.h>
#include <java/io/FileOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <jcpp.h>

#undef ATTR_CODE
#undef ATTR_CONSTANT_VALUE
#undef ATTR_EXCEPTIONS

using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $FieldArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Field>;
using $MethodArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Method>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $Code = ::com::sun::org::apache::bcel::internal::classfile::Code;
using $ConstantValue = ::com::sun::org::apache::bcel::internal::classfile::ConstantValue;
using $ExceptionTable = ::com::sun::org::apache::bcel::internal::classfile::ExceptionTable;
using $Field = ::com::sun::org::apache::bcel::internal::classfile::Field;
using $Method = ::com::sun::org::apache::bcel::internal::classfile::Method;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $AttributeHTML = ::com::sun::org::apache::bcel::internal::util::AttributeHTML;
using $Class2HTML = ::com::sun::org::apache::bcel::internal::util::Class2HTML;
using $ConstantHTML = ::com::sun::org::apache::bcel::internal::util::ConstantHTML;
using $FileOutputStream = ::java::io::FileOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

$FieldInfo _MethodHTML_FieldInfo_[] = {
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MethodHTML, className)},
	{"file", "Ljava/io/PrintWriter;", nullptr, $PRIVATE | $FINAL, $field(MethodHTML, file)},
	{"constantHtml", "Lcom/sun/org/apache/bcel/internal/util/ConstantHTML;", nullptr, $PRIVATE | $FINAL, $field(MethodHTML, constantHtml)},
	{"attribute_html", "Lcom/sun/org/apache/bcel/internal/util/AttributeHTML;", nullptr, $PRIVATE | $FINAL, $field(MethodHTML, attribute_html)},
	{}
};

$MethodInfo _MethodHTML_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Lcom/sun/org/apache/bcel/internal/classfile/Method;[Lcom/sun/org/apache/bcel/internal/classfile/Field;Lcom/sun/org/apache/bcel/internal/util/ConstantHTML;Lcom/sun/org/apache/bcel/internal/util/AttributeHTML;)V", nullptr, 0, $method(MethodHTML, init$, void, $String*, $String*, $MethodArray*, $FieldArray*, $ConstantHTML*, $AttributeHTML*), "java.io.IOException"},
	{"writeField", "(Lcom/sun/org/apache/bcel/internal/classfile/Field;)V", nullptr, $PRIVATE, $method(MethodHTML, writeField, void, $Field*), "java.io.IOException"},
	{"writeMethod", "(Lcom/sun/org/apache/bcel/internal/classfile/Method;I)V", nullptr, $PRIVATE, $method(MethodHTML, writeMethod, void, $Method*, int32_t)},
	{}
};

$ClassInfo _MethodHTML_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.util.MethodHTML",
	"java.lang.Object",
	nullptr,
	_MethodHTML_FieldInfo_,
	_MethodHTML_MethodInfo_
};

$Object* allocate$MethodHTML($Class* clazz) {
	return $of($alloc(MethodHTML));
}

void MethodHTML::init$($String* dir, $String* class_name, $MethodArray* methods, $FieldArray* fields, $ConstantHTML* constant_html, $AttributeHTML* attribute_html) {
	$useLocalCurrentObjectStackCache();
	$set(this, className, class_name);
	$set(this, attribute_html, attribute_html);
	$set(this, constantHtml, constant_html);
	$set(this, file, $new($PrintWriter, static_cast<$OutputStream*>($$new($FileOutputStream, $$str({dir, class_name, "_methods.html"_s})))));
	$nc(this->file)->println("<HTML><BODY BGCOLOR=\"#C0C0C0\"><TABLE BORDER=0>"_s);
	$nc(this->file)->println("<TR><TH ALIGN=LEFT>Access&nbsp;flags</TH><TH ALIGN=LEFT>Type</TH><TH ALIGN=LEFT>Field&nbsp;name</TH></TR>"_s);
	{
		$var($FieldArray, arr$, fields);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Field, field, arr$->get(i$));
			{
				writeField(field);
			}
		}
	}
	$nc(this->file)->println("</TABLE>"_s);
	$nc(this->file)->println("<TABLE BORDER=0><TR><TH ALIGN=LEFT>Access&nbsp;flags</TH><TH ALIGN=LEFT>Return&nbsp;type</TH><TH ALIGN=LEFT>Method&nbsp;name</TH><TH ALIGN=LEFT>Arguments</TH></TR>"_s);
	for (int32_t i = 0; i < $nc(methods)->length; ++i) {
		writeMethod(methods->get(i), i);
	}
	$nc(this->file)->println("</TABLE></BODY></HTML>"_s);
	$nc(this->file)->close();
}

void MethodHTML::writeField($Field* field) {
	$useLocalCurrentObjectStackCache();
	$var($String, type, $Utility::signatureToString($($nc(field)->getSignature())));
	$var($String, name, $nc(field)->getName());
	$var($String, access, $Utility::accessToString(field->getAccessFlags()));
	$var($AttributeArray, attributes, nullptr);
	$assign(access, $Utility::replace(access, " "_s, "&nbsp;"_s));
	$nc(this->file)->print($$str({"<TR><TD><FONT COLOR=\"#FF0000\">"_s, access, "</FONT></TD>\n<TD>"_s, $($Class2HTML::referenceType(type)), "</TD><TD><A NAME=\"field"_s, name, "\">"_s, name, "</A></TD>"_s}));
	$assign(attributes, field->getAttributes());
	for (int32_t i = 0; i < $nc(attributes)->length; ++i) {
		$nc(this->attribute_html)->writeAttribute(attributes->get(i), $$str({name, "@"_s, $$str(i)}));
	}
	for (int32_t i = 0; i < $nc(attributes)->length; ++i) {
		if ($nc(attributes->get(i))->getTag() == $Const::ATTR_CONSTANT_VALUE) {
			$var($String, str, $nc(($cast($ConstantValue, attributes->get(i))))->toString());
			$nc(this->file)->print($$str({"<TD>= <A HREF=\""_s, this->className, "_attributes.html#"_s, name, "@"_s, $$str(i), "\" TARGET=\"Attributes\">"_s, str, "</TD>\n"_s}));
			break;
		}
	}
	$nc(this->file)->println("</TR>"_s);
}

void MethodHTML::writeMethod($Method* method, int32_t method_number) {
	$useLocalCurrentObjectStackCache();
	$var($String, signature, $nc(method)->getSignature());
	$var($StringArray, args, $Utility::methodSignatureArgumentTypes(signature, false));
	$var($String, type, $Utility::methodSignatureReturnType(signature, false));
	$var($String, name, method->getName());
	$var($String, html_name, nullptr);
	$var($String, access, $Utility::accessToString(method->getAccessFlags()));
	$var($AttributeArray, attributes, method->getAttributes());
	$assign(access, $Utility::replace(access, " "_s, "&nbsp;"_s));
	$assign(html_name, $Class2HTML::toHTML(name));
	$nc(this->file)->print($$str({"<TR VALIGN=TOP><TD><FONT COLOR=\"#FF0000\"><A NAME=method"_s, $$str(method_number), ">"_s, access, "</A></FONT></TD>"_s}));
	$nc(this->file)->print($$str({"<TD>"_s, $($Class2HTML::referenceType(type)), "</TD><TD><A HREF="_s, this->className, "_code.html#method"_s, $$str(method_number), " TARGET=Code>"_s, html_name, "</A></TD>\n<TD>("_s}));
	for (int32_t i = 0; i < $nc(args)->length; ++i) {
		$nc(this->file)->print($($Class2HTML::referenceType(args->get(i))));
		if (i < args->length - 1) {
			$nc(this->file)->print(", "_s);
		}
	}
	$nc(this->file)->print(")</TD></TR>"_s);
	for (int32_t i = 0; i < $nc(attributes)->length; ++i) {
		$nc(this->attribute_html)->writeAttribute(attributes->get(i), $$str({"method"_s, $$str(method_number), "@"_s, $$str(i)}), method_number);
		int8_t tag = $nc(attributes->get(i))->getTag();
		if (tag == $Const::ATTR_EXCEPTIONS) {
			$nc(this->file)->print("<TR VALIGN=TOP><TD COLSPAN=2></TD><TH ALIGN=LEFT>throws</TH><TD>"_s);
			$var($ints, exceptions, $nc(($cast($ExceptionTable, attributes->get(i))))->getExceptionIndexTable());
			for (int32_t j = 0; j < $nc(exceptions)->length; ++j) {
				$nc(this->file)->print($($nc(this->constantHtml)->referenceConstant(exceptions->get(j))));
				if (j < exceptions->length - 1) {
					$nc(this->file)->print(", "_s);
				}
			}
			$nc(this->file)->println("</TD></TR>"_s);
		} else if (tag == $Const::ATTR_CODE) {
			$var($AttributeArray, c_a, $nc(($cast($Code, attributes->get(i))))->getAttributes());
			for (int32_t j = 0; j < $nc(c_a)->length; ++j) {
				$nc(this->attribute_html)->writeAttribute(c_a->get(j), $$str({"method"_s, $$str(method_number), "@"_s, $$str(i), "@"_s, $$str(j)}), method_number);
			}
		}
	}
}

MethodHTML::MethodHTML() {
}

$Class* MethodHTML::load$($String* name, bool initialize) {
	$loadClass(MethodHTML, name, initialize, &_MethodHTML_ClassInfo_, allocate$MethodHTML);
	return class$;
}

$Class* MethodHTML::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com