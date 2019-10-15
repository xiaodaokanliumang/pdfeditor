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

	/* @�ӿ� ��ȡʵ����ɫ
	 * @���� QColor ����ʵ��������ɫ
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��11��
	 */
	virtual QColor getColor() const = 0;

	/* @�ӿ� ����ʵ�����ɫ
	 * @���� QColor ʵ�����ɫ
	 * @���� bool �ɹ�����ֵΪtrue�����򷵻�ֵΪfalse
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��11��
	 */
	virtual bool setColor(const QColor &) = 0;

};

END_DOX_NAMESPACE

#endif /*IPDFOBJECTITEM_H*/