#ifndef IPDFOBJECTITEM_H
#define IPDFOBJECTITEM_H

#ifndef IOBJECT_CORE_H
#include "core/iobject.h"
#endif /*IOBJECT_CORE_H*/

BEGIN_DOX_NAMESPACE

class IPDFObjectItem
	: public IObject
{
	REGISTER_INTERFACE(IPDFObjectItem, IObject)

public:

	/* @接口 获取实体颜色
	 * @返回 QColor 返回实体对象的颜色
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月11号
	 */
	virtual QColor getColor() const = 0;

	/* @接口 设置实体的颜色
	 * @参数 QColor 实体的颜色
	 * @返回 bool 成功返回值为true，否则返回值为false
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月11号
	 */
	virtual bool setColor(const QColor &) = 0;

};

END_DOX_NAMESPACE

#endif /*IPDFOBJECTITEM_H*/