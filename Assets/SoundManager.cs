using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    public static SoundManager instance;

    [SerializeField] private AudioSource bgAudioSource;
    [SerializeField] private AudioSource sfxAudioSource;
    [SerializeField] private AudioClip punchClip;
    [SerializeField] private AudioClip treeBreakClip;
    [SerializeField] private AudioClip stoneBreakClip;
    [SerializeField] private AudioClip glassBreakClip;
    [SerializeField] private AudioClip moneyIncomeClip;

    private void Awake()
    {
        instance = this;
    }

    public void PlayPunch()
    {
        sfxAudioSource.PlayOneShot(punchClip);
    }
    public void PlayTreeBreak()
    {
        sfxAudioSource.PlayOneShot(treeBreakClip);
    }
    public void PlayStoneBreak()
    {
        sfxAudioSource.PlayOneShot(stoneBreakClip);
    }
    public void PlayGlassBreak()
    {
        sfxAudioSource.PlayOneShot(glassBreakClip);
    }
    public void PlayMoneyIncome()
    {
        sfxAudioSource.PlayOneShot(moneyIncomeClip);
    }
}
