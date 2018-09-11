/*! \file UITabLayout.h
	\brief ѡ��Ͳ����������
	\author duilib
	\date 13:10:2013   12:23
	\copyright GNU Public License
	\version 1.0
*/

#ifndef __UITABLAYOUT_H__
#define __UITABLAYOUT_H__

/*! \class CTabLayoutUI
	\brief �������������ѡ����Ͳ��ֵ�
*/
class CUITabLayout : public CUIContainer
{
public:
	CUITabLayout();

	/** \fn CUIString GetClass() const
	    \brief ��ȡ���������
	    \return ����
	*/

	CUIString GetClass() const;

	/** \fn LPVOID GetInterface(const CUIString&  strName)
	    \brief ͨ�����ƻ�ȡ�ӿ�
		\param [in] pstrName �ӿ�����
	    \return �ӿڵ�ָ��
	*/

	LPVOID GetInterface(const CUIString& strName);

	/** \fn bool Add(CUIControl* pControl)
	    \brief ���һ��ѡ�
		\param [in] pControl ��ѡ��ؼ�
	    \return �ɹ�true ����false
	*/

	bool Add(CUIControl* pControl);

	/** \fn bool AddAt(CUIControl* pControl, int iIndex)
	    \brief ��ָ��λ�����һ��ѡ�
		\param [in] pControl ��ѡ��ؼ�
		\param [in] iIndex ��ѡ�������
	    \return �ɹ�true ����false
	*/

	bool AddAt(CUIControl* pControl, int iIndex);

	/** \fn bool Remove(CUIControl* pControl)
	    \brief ɾ��һ��ѡ�
		\param [in] pControl ��ѡ��ؼ�
	    \return �ɹ�true ����false
	*/

	bool Remove(CUIControl* pControl);

	/** \fn void RemoveAll()
	    \brief ɾ������ѡ�
	    \return �ɹ�true ����false
	*/

	void RemoveAll();

	/** \fn int GetCurSel() const
	    \brief ��ȡ��ǰѡ�
	    \return ��ǰѡ�������
	*/

	int GetCurSel() const;

	/** \fn bool SelectItem(int iIndex)
	    \brief ͨ������ѡ��ָ��ѡ�
		\param [in] iIndex Ҫѡ��ѡ�������
	    \return �ɹ�true.����false
	*/

	bool SelectItem(int iIndex);

	/** \fn bool SelectItem(CControlUI* pControl)
	    \brief ͨ���ؼ�ָ��ѡ��ָ��ѡ�
		\param [in] pControl Ҫѡ��ѡ��Ŀؼ���ָ��
	    \return �ɹ�true.����false
	*/

	bool SelectItem(CUIControl* pControl);

	/** \fn void SetPos(const CUIRect& rc)
	    \brief ���ÿؼ��µ�λ��
		\param [in] rc �ؼ�����λ��
	    \return �ɹ�true.����false
	*/

	void SetPos(const CUIRect& rc);

	/** \fn void SetAttribute(LPCTSTR pstrName, LPCTSTR pstrValue)
	    \brief ���ô˿ؼ�������
		\param [in] pstrName ��������
		\param [in] pstrValue ����ֵ
		\return ��true��false
	*/

	void SetAttribute(LPCWSTR pstrName, LPCWSTR pstrValue);

protected:
	int m_iCurSel;
};
#endif // __UITABLAYOUT_H__
