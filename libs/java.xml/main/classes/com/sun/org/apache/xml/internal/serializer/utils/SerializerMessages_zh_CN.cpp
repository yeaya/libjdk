#include <com/sun/org/apache/xml/internal/serializer/utils/SerializerMessages_zh_CN.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/MsgKey.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

#undef BAD_MSGFORMAT
#undef BAD_MSGKEY
#undef ER_ATTR_UNBOUND_PREFIX_IN_ENTREF
#undef ER_BUFFER_SIZE_LESSTHAN_ZERO
#undef ER_CANNOT_INIT_URI_EMPTY_PARMS
#undef ER_CDATA_SECTIONS_SPLIT
#undef ER_COULD_NOT_LOAD_METHOD_PROPERTY
#undef ER_COULD_NOT_LOAD_RESOURCE
#undef ER_ELEM_UNBOUND_PREFIX_IN_ENTREF
#undef ER_ENCODING_NOT_SUPPORTED
#undef ER_FACTORY_PROPERTY_MISSING
#undef ER_FEATURE_NOT_FOUND
#undef ER_FEATURE_NOT_SUPPORTED
#undef ER_FRAG_FOR_GENERIC_URI
#undef ER_FRAG_INVALID_CHAR
#undef ER_FRAG_WHEN_PATH_NULL
#undef ER_HOST_ADDRESS_NOT_WELLFORMED
#undef ER_ILLEGAL_ATTRIBUTE_POSITION
#undef ER_ILLEGAL_CHARACTER
#undef ER_INVALID_PORT
#undef ER_INVALID_UTF16_SURROGATE
#undef ER_NAMESPACE_PREFIX
#undef ER_NO_FRAGMENT_STRING_IN_PATH
#undef ER_NO_OUTPUT_SPECIFIED
#undef ER_NO_PORT_IF_NO_HOST
#undef ER_NO_QUERY_STRING_IN_PATH
#undef ER_NO_SCHEME_IN_URI
#undef ER_NO_USERINFO_IF_NO_HOST
#undef ER_NS_PREFIX_CANNOT_BE_BOUND
#undef ER_NULL_LOCAL_ATTR_NAME
#undef ER_NULL_LOCAL_ELEMENT_NAME
#undef ER_OIERROR
#undef ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE
#undef ER_PATH_INVALID_CHAR
#undef ER_PORT_WHEN_HOST_NULL
#undef ER_RESOURCE_COULD_NOT_FIND
#undef ER_RESOURCE_COULD_NOT_LOAD
#undef ER_SCHEME_FROM_NULL_STRING
#undef ER_SCHEME_NOT_CONFORMANT
#undef ER_SCHEME_REQUIRED
#undef ER_SERIALIZER_NOT_CONTENTHANDLER
#undef ER_STRAY_ATTRIBUTE
#undef ER_STRAY_NAMESPACE
#undef ER_STRING_TOO_LONG
#undef ER_TYPE_MISMATCH_ERR
#undef ER_UNABLE_TO_SERIALIZE_NODE
#undef ER_UNSUPPORTED_ENCODING
#undef ER_WARNING_WF_NOT_CHECKED
#undef ER_WF_DASH_IN_COMMENT
#undef ER_WF_INVALID_CHARACTER
#undef ER_WF_INVALID_CHARACTER_IN_CDATA
#undef ER_WF_INVALID_CHARACTER_IN_COMMENT
#undef ER_WF_INVALID_CHARACTER_IN_NODE_NAME
#undef ER_WF_INVALID_CHARACTER_IN_PI
#undef ER_WF_INVALID_CHARACTER_IN_TEXT
#undef ER_WF_LT_IN_ATTVAL
#undef ER_WF_REF_TO_EXTERNAL_ENT
#undef ER_WF_REF_TO_UNPARSED_ENT
#undef ER_WRITING_INTERNAL_SUBSET
#undef ER_XML_VERSION_NOT_SUPPORTED

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $MsgKey = ::com::sun::org::apache::xml::internal::serializer::utils::MsgKey;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {

void SerializerMessages_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* SerializerMessages_zh_CN::getContents() {
	$useLocalObjectStack();
	$init($MsgKey);
	$var($ObjectArray2, contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$MsgKey::BAD_MSGKEY,
			u"消息关键字 \'\'{0}\'\' 不在消息类 \'\'{1}\'\' 中"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::BAD_MSGFORMAT,
			u"消息类 \'\'{1}\'\' 中消息 \'\'{0}\'\' 的格式化失败。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SERIALIZER_NOT_CONTENTHANDLER,
			u"串行器类 \'\'{0}\'\' 不实现 org.xml.sax.ContentHandler。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_RESOURCE_COULD_NOT_FIND,
			u"找不到资源 [ {0} ]。\n {1}"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_RESOURCE_COULD_NOT_LOAD,
			u"资源 [ {0} ] 无法加载: {1} \n {2} \t {3}"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_BUFFER_SIZE_LESSTHAN_ZERO,
			u"缓冲区大小 <=0"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_INVALID_UTF16_SURROGATE,
			u"检测到无效的 UTF-16 代理: {0}?"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_OIERROR,
			u"IO 错误"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ILLEGAL_ATTRIBUTE_POSITION,
			u"在生成子节点之后或在生成元素之前无法添加属性 {0}。将忽略属性。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NAMESPACE_PREFIX,
			u"没有说明名称空间前缀 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_STRAY_ATTRIBUTE,
			u"属性 \'\'{0}\'\' 在元素外部。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_STRAY_NAMESPACE,
			u"名称空间声明 \'\'{0}\'\'=\'\'{1}\'\' 在元素外部。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_COULD_NOT_LOAD_RESOURCE,
			u"无法加载 \'\'{0}\'\' (检查 CLASSPATH), 现在只使用默认值"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ILLEGAL_CHARACTER,
			u"尝试输出未以{1}的指定输出编码表示的整数值 {0} 的字符。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_COULD_NOT_LOAD_METHOD_PROPERTY,
			u"无法为输出方法 \'\'{1}\'\' 加载属性文件 \'\'{0}\'\' (检查 CLASSPATH)"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_INVALID_PORT,
			u"无效的端口号"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_PORT_WHEN_HOST_NULL,
			u"主机为空时, 无法设置端口"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_HOST_ADDRESS_NOT_WELLFORMED,
			u"主机不是格式良好的地址"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SCHEME_NOT_CONFORMANT,
			u"方案不一致。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SCHEME_FROM_NULL_STRING,
			u"无法从空字符串设置方案"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE,
			u"路径包含无效的转义序列"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_PATH_INVALID_CHAR,
			u"路径包含无效的字符: {0}"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FRAG_INVALID_CHAR,
			u"片段包含无效的字符"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FRAG_WHEN_PATH_NULL,
			u"路径为空时, 无法设置片段"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FRAG_FOR_GENERIC_URI,
			u"只能为一般 URI 设置片段"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_SCHEME_IN_URI,
			u"在 URI 中找不到方案"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_CANNOT_INIT_URI_EMPTY_PARMS,
			u"无法以空参数初始化 URI"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_FRAGMENT_STRING_IN_PATH,
			u"路径和片段中都无法指定片段"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_QUERY_STRING_IN_PATH,
			u"路径和查询字符串中不能指定查询字符串"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_PORT_IF_NO_HOST,
			u"如果没有指定主机, 则不可以指定端口"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_USERINFO_IF_NO_HOST,
			u"如果没有指定主机, 则不可以指定 Userinfo"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_XML_VERSION_NOT_SUPPORTED,
			u"警告: 输出文档的版本应为 \'\'{0}\'\'。不支持此版本的 XML。输出文档的版本将为 \'\'1.0\'\'。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SCHEME_REQUIRED,
			u"方案是必需的!"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FACTORY_PROPERTY_MISSING,
			u"传递到 SerializerFactory 的 Properties 对象没有 \'\'{0}\'\' 属性。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ENCODING_NOT_SUPPORTED,
			u"警告: Java 运行时不支持编码 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FEATURE_NOT_FOUND,
			u"未识别参数 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FEATURE_NOT_SUPPORTED,
			u"已识别参数 \'\'{0}\'\', 但无法设置请求的值。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_STRING_TOO_LONG,
			u"生成的字符串太长, 不适合 DOMString: \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_TYPE_MISMATCH_ERR,
			u"此参数名称的值类型与预期的值类型不兼容。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_OUTPUT_SPECIFIED,
			u"要将数据写入的输出目标为空值。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_UNSUPPORTED_ENCODING,
			u"遇到不支持的编码。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_UNABLE_TO_SERIALIZE_NODE,
			u"无法序列化节点。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_CDATA_SECTIONS_SPLIT,
			u"CDATA 节包含一个或多个终止标记 \']]>\'。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WARNING_WF_NOT_CHECKED,
			u"无法创建格式合规性检查器的实例。格式合规性参数已设置为“真”, 但无法执行格式合规性检查。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER,
			u"节点 \'\'{0}\'\' 包含无效的 XML 字符。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_COMMENT,
			u"在注释中找到无效的 XML 字符 (Unicode: 0x{0})。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_PI,
			u"在处理指令数据中找到无效的 XML 字符 (Unicode: 0x{0})。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_CDATA,
			u"在 CDATA 节的内容中找到无效的 XML 字符 (Unicode: 0x{0})。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_TEXT,
			u"在节点的字符数据内容中找到无效的 XML 字符 (Unicode: 0x{0})。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME,
			u"在名为 \'\'{1}\'\' 的{0}节点中找到无效的 XML 字符。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_DASH_IN_COMMENT,
			u"注释中不允许出现字符串 \"--\"。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_LT_IN_ATTVAL,
			u"与元素类型 \"{0}\" 相关联的 \"{1}\" 属性值不能包含 \'\'<\'\' 字符。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_REF_TO_UNPARSED_ENT,
			u"不允许使用未解析的实体引用 \"&{0};\"。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_REF_TO_EXTERNAL_ENT,
			u"属性值中不允许采用外部实体引用 \"&{0};\"。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NS_PREFIX_CANNOT_BE_BOUND,
			u"前缀 \"{0}\" 无法绑定到名称空间 \"{1}\"。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NULL_LOCAL_ELEMENT_NAME,
			u"元素 \"{0}\" 的本地名称为空值。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NULL_LOCAL_ATTR_NAME,
			u"属性 \"{0}\" 的本地名称为空值。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ELEM_UNBOUND_PREFIX_IN_ENTREF,
			u"实体节点 \"{0}\" 的替换文本包含带有未绑定前缀 \"{2}\" 的元素节点 \"{1}\"。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ATTR_UNBOUND_PREFIX_IN_ENTREF,
			u"实体节点 \"{0}\" 的替换文本包含带有未绑定前缀 \"{2}\" 的属性节点 \"{1}\"。"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WRITING_INTERNAL_SUBSET,
			u"写入内部子集时出现错误。"_s
		})
	}));
	return contents;
}

SerializerMessages_zh_CN::SerializerMessages_zh_CN() {
}

$Class* SerializerMessages_zh_CN::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SerializerMessages_zh_CN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SerializerMessages_zh_CN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.serializer.utils.SerializerMessages_zh_CN",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SerializerMessages_zh_CN, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SerializerMessages_zh_CN);
	});
	return class$;
}

$Class* SerializerMessages_zh_CN::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com